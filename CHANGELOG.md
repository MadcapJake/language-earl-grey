# Change Log
All notable changes to this project will be documented in this file.

## [Unreleased][unreleased]

## [0.5.28] - 2015-05-22
### Added
- Function with-notation highlights
- variable assignment highlights
- Special keywords added to autoindent

### Changed
- Fixed dotted functions after lists
- Much improved function call rules
- Fixed colon and op autoindent rules

## [0.5.0] - 2015-05-20
### Added
- Numbers section to `docs.eg`
- Arrays and objects section to `docs.eg`
- Functions section to `docs.eg`
- Named tuple rule
- All regular function calls should be covered
- dot string as function rule

### Changed
- Fixed radix numbers
- Fairly robust set of keyword rules
- Improved dot strings
- Separated dotted functions
- Improved autoindent (now works after any hanging operator)
- Adjusted todo list and status

## [0.4.10] - 2015-05-16
### Added
- changelog file to track changes better
- arrow functions, some constants and `this` highlighting (thanks @davej )

### Changed
- todo list updated with completed syntax
- structure of `README.md` changed around a bit

### Removed
- repple feature and keybindings from todo list as that will need to be a
  separate package


## [0.4.9] - 2015-05-16
### Changed
- Symbol rule was removed from keyword rule. Gotta find a better selector.
  Another option is not highlighting general symbols (this is probably more
  natural)

### Fixed
- Interpolation looks pretty good now (minus keywords...)

## [0.4.8] - 2015-05-16
### Added
- Pretty `re` file that might not be useful but has helped me work through the
  keyword pattern matching
- More of the docs have been translated to straight EG, up to interpolation

### Changed
- Interpolation now does not show keywords due to current difficulties getting
  it to work

[unreleased]: https://github.com/madcapjake/language-earl-grey/compare/v0.5.28...HEAD
[0.5.0]: https://github.com/madcapjake/language-earl-grey/compare/v0.5.0...v0.5.28
[0.5.0]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.10...v0.5.0
[0.4.10]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.9...v0.4.10
[0.4.9]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.8...v0.4.9
[0.4.8]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.7...v0.4.8
