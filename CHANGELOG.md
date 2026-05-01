# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/)

## [Unreleased]

## [v0.3.0] - 2026-05-01

### Added

- Implemented a comprehensive dimensional analysis system based on the international ISO 80000 standard (parts 3 through 13).
- Modules:
  - `iso_80000_3`: Space and Time.
  - `iso_80000_4`: Mechanics.
  - `iso_80000_5`: Thermodynamics.
  - `iso_80000_6`: Electromagnetism.
  - `iso_80000_7`: Light and Radiation.
  - `iso_80000_8`: Acoustics.
  - `iso_80000_9`: Physical Chemistry.
  - `iso_80000_10`: Atomic and Nuclear Physics.
  - `iso_80000_11`: Characteristic Numbers.
  - `iso_80000_12`: Condensed Matter Physics.
  - `iso_80000_13`: Information Science.
- Global availability of standard symbols (N, J, W, V, Hz, etc.) within module-specific namespaces.
- Improved `quantity` class constructors to handle scalar multiplication and prefix-based initialization.

---

## [v0.2.0] - 2026-04-30

### Added

- Implemented the complete set of SI derived units across all major domains.
- Full range of scaling factors from `yocto` to `yotta`.
- Added units accepted for use with SI.

---

## [v0.1.0] - 2026-04-25

### Added

- Established directory structure for `src/`, `include/`, `tests/` and `scripts/`.
- Initialized Bazel 8.6.0 configuration using Bzlmod (`MODULE.bazel`).
- Created `.bazelrc` with C++20 standard, strict warnings and release optimizations.
- Added GoogleTest (v1.17.0) for unit testing.
- Added `clean` script to manage workspace maintenance.
- Added `.gitignore` tailored for Bazel artifacts and IDE-specific files.
