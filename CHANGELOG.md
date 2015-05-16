# Change Log
All notable changes to this project will be documented in this file.
This project attempts to adhere to [Semantic Versioning](http://semver.org/).

## [Unreleased][unreleased]
### Changed
- *Nothing yet*

## [0.4.10] - 2015-05-16
### Added
- changelog file to track changes better
- arrow functions, some constants and `this` highlighting (thanks @davej)

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

[unreleased]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.10...HEAD
[0.4.10]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.9...v0.4.10
[0.4.9]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.8...v0.4.9
[0.4.8]: https://github.com/madcapjake/language-earl-grey/compare/v0.4.7...v0.4.8
