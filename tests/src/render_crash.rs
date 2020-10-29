//! Tests for crashes in the rendering stage.
//!
//! Ensures that redering a particular SVG doesn't crash, but we don't care
//! about the resulting image or even whether there were errors during rendering.

#![cfg(test)]
use test_generator::test_resources;

use cairo;
use librsvg::{CairoRenderer, Loader};

use crate::utils::fixture_path;

#[test_resources("tests/fixtures/render-crash/*.svg")]
fn loading_crash(name: &str) {
    let path = fixture_path(name);

    let handle = Loader::new()
        .read_path(path)
        .unwrap_or_else(|e| panic!("could not load: {}", e));

    let surface = cairo::ImageSurface::create(cairo::Format::ARgb32, 100, 100).unwrap();
    let cr = cairo::Context::new(&surface);

    // We just test for crashes during rendering, and don't care about success/error.
    let _ = CairoRenderer::new(&handle).render_document(
        &cr,
        &cairo::Rectangle {
            x: 0.0,
            y: 0.0,
            width: 100.0,
            height: 100.0,
        },
    );
}