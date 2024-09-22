import XCTest
import SwiftTreeSitter
import TreeSitterFlatbuffers

final class TreeSitterFlatbuffersTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_flatbuffers())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Flatbuffers grammar")
    }
}
