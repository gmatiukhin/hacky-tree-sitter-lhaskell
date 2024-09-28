import XCTest
import SwiftTreeSitter
import TreeSitterLhaskell

final class TreeSitterLhaskellTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lhaskell())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Lhaskell grammar")
    }
}
