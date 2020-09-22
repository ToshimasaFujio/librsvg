/**
 * SECTION: rsvg-features
 * @short_description: Check for the version of librsvg being used.
 *
 * Librsvg provides a few C macros that C and C++ programs can use to
 * check the version being used at compile-time, that is, the API that
 * the program expects to have.  This is useful for programs that need
 * to conditionally compile code with <literal>#ifdef</literal> blocks
 * depending on the version of librsvg that may be available during
 * compilation.
 *
 * Librsvg also provides a few global constants that can be used to
 * check the version of librsvg being used at run-time.  This is
 * useful to know which version of librsvg is actually being used on
 * the system where the program is running.
 */

#include "rsvg.h"

/**
 * LIBRSVG_MAJOR_VERSION:
 *
 * This is a C macro that expands to a number with the major version
 * of librsvg against which your program is compiled.
 *
 * For example, for librsvg-2.3.4, the major version is 2.
 *
 * C programs can use this as a compile-time check for the required
 * version, but note that generally it is a better idea to do
 * compile-time checks by calling <ulink
 * url="https://www.freedesktop.org/wiki/Software/pkg-config/">pkg-config</ulink>
 * in your build scripts.
 *
 * Note: for a run-time check on the version of librsvg that your
 * program is running with (e.g. the version which the linker used for
 * your program), or for programs not written in C, use
 * @rsvg_major_version instead.
 */

/**
 * LIBRSVG_MINOR_VERSION:
 *
 * This is a C macro that expands to a number with the minor version
 * of librsvg against which your program is compiled.
 *
 * For example, for librsvg-2.3.4, the minor version is 3.
 *
 * C programs can use this as a compile-time check for the required
 * version, but note that generally it is a better idea to do
 * compile-time checks by calling <ulink
 * url="https://www.freedesktop.org/wiki/Software/pkg-config/">pkg-config</ulink>
 * in your build scripts.
 *
 * Note: for a run-time check on the version of librsvg that your
 * program is running with (e.g. the version which the linker used for
 * your program), or for programs not written in C, use
 * @rsvg_minor_version instead.
 */

/**
 * LIBRSVG_MICRO_VERSION:
 *
 * This is a C macro that expands to a number with the micro version
 * of librsvg against which your program is compiled.
 *
 * For example, for librsvg-2.3.4, the micro version is 4.
 *
 * C programs can use this as a compile-time check for the required
 * version, but note that generally it is a better idea to do
 * compile-time checks by calling <ulink
 * url="https://www.freedesktop.org/wiki/Software/pkg-config/">pkg-config</ulink>
 * in your build scripts.
 *
 * Note: for a run-time check on the version of librsvg that your
 * program is running with (e.g. the version which the linker used for
 * your program), or for programs not written in C, use
 * @rsvg_micro_version instead.
 */

/**
 * LIBRSVG_VERSION:
 *
 * This is a C macro that expands to a string with the version of
 * librsvg against which your program is compiled.
 *
 * For example, for librsvg-2.3.4, this macro expands to
 * <literal>"2.3.4"</literal>.
 *
 * C programs can use this as a compile-time check for the required
 * version, but note that generally it is a better idea to do
 * compile-time checks by calling <ulink
 * url="https://www.freedesktop.org/wiki/Software/pkg-config/">pkg-config</ulink>
 * in your build scripts.
 *
 * Note: for a run-time check on the version of librsvg that your
 * program is running with (e.g. the version which the linker used for
 * your program), or for programs not written in C, use
 * @rsvg_version instead.
 */

/**
 * LIBRSVG_CHECK_VERSION:
 * @major: component for the major version to check
 * @minor: component for the minor version to check
 * @micro: component for the micro version to check
 *
 * This C macro returns #TRUE if the the version of librsvg being
 * compiled against is the same or newer than the specified version.
 *
 * Note that this a compile-time check for C programs.  If you want a
 * run-time check for the version of librsvg being used, or if you are
 * using another programming language, see the variables
 * @rsvg_major_version, @rsvg_minor_version, @rsvg_micro_version
 * instead.
 */

/**
 * rsvg_major_version:
 *
 * Major version of the library.  For example, for version 2.3.4, the major
 * version will be 2.
 *
 * Since: 2.52
 */

/**
 * rsvg_minor_version:
 *
 * Minor version of the library.  For example, for version 2.3.4, the minor
 * version will be 3.
 *
 * Since: 2.52
 */

/**
 * rsvg_micro_version:
 *
 * Micro version of the library.  For example, for version 2.3.4, the micro
 * version will be 4.
 *
 * Since: 2.52
 */
