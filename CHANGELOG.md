## Unreleased

### Breaking Changes
- Grammar was refactored including:
  - attribute node was renamed to custom_attribute
  - type node was removed in favor of specific nodes e.g. ident, qualified_ident, scalar_type
  
### New Features
- Support for qualified type names (qualified_ident node).
- Expanded usage of named fields. See test/corpus/ for examples.
- More compact grammar. Less unnecessary intermediate nodes.
- Several small fixes for less common but valid syntaxes (e.g. [ ] as a vector constant).

## 0.0.1 - September 24, 2024

Initial release.
