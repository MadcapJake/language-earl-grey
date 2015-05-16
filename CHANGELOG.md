# Change Log
All notable changes to this project will be documented in this file.
This project attempts to adhere to [Semantic Versioning](http://semver.org/).

## [Unreleased][unreleased]
### Added
- Add changelog file to track changes better

### Changed
- Updated todo list with completed syntax
- Updated structure of `README.md`
- Removed repple feature and keybindings as that will need to be a separate
  package


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
