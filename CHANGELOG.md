# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/)

## [Unreleased]

### Added

- Added physical constants and SI unit prefixes.

---

## [v0.1.0] - 2026-04-25

### Added

- Established directory structure for `src/`, `include/`, `tests/` and `scripts/`.
- Initialized Bazel 8.6.0 configuration using Bzlmod (`MODULE.bazel`).
- Created `.bazelrc` with C++20 standard, strict warnings and release optimizations.
- Added GoogleTest (v1.17.0) for unit testing.
- Added `clean` script to manage workspace maintenance.
- Added `.gitignore` tailored for Bazel artifacts and IDE-specific files.
