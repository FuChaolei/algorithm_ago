// 通过将键绑定放入键绑定文件来覆盖键绑定。
[{"key" : "escape escape", "command" : "workbench.action.exitZenMode", "when" : "inZenMode"},
 {"key" : "shift+escape", "command" : "closeReferenceSearch", "when" : "inReferenceSearchEditor && !config.editor.stablePeek"},
 {"key" : "escape", "command" : "closeReferenceSearch", "when" : "inReferenceSearchEditor && !config.editor.stablePeek"},
 {"key" : "escape", "command" : "editor.closeTestPeek", "when" : "testing.isInPeek && !config.editor.stablePeek || testing.isPeekVisible && !config.editor.stablePeek"},
 {"key" : "shift+escape", "command" : "cancelSelection", "when" : "editorHasSelection && textInputFocus"},
 {"key" : "escape", "command" : "cancelSelection", "when" : "editorHasSelection && textInputFocus"},
 {"key" : "ctrl+end", "command" : "cursorBottom", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+end", "command" : "cursorBottomSelect", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+alt+down", "command" : "cursorColumnSelectDown", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+alt+left", "command" : "cursorColumnSelectLeft", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+alt+pagedown", "command" : "cursorColumnSelectPageDown", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+alt+pageup", "command" : "cursorColumnSelectPageUp", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+alt+right", "command" : "cursorColumnSelectRight", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+alt+up", "command" : "cursorColumnSelectUp", "when" : "textInputFocus"},
 {"key" : "down", "command" : "cursorDown", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+down", "command" : "cursorDownSelect", "when" : "textInputFocus"},
 {"key" : "shift+down", "command" : "cursorDownSelect", "when" : "textInputFocus"},
 {"key" : "end", "command" : "cursorEnd", "when" : "textInputFocus", "args" : {"sticky" : false}},
 {"key" : "shift+end", "command" : "cursorEndSelect", "when" : "textInputFocus", "args" : {"sticky" : false}},
 {"key" : "home", "command" : "cursorHome", "when" : "textInputFocus"},
 {"key" : "shift+home", "command" : "cursorHomeSelect", "when" : "textInputFocus"},
 {"key" : "left", "command" : "cursorLeft", "when" : "textInputFocus"},
 {"key" : "shift+left", "command" : "cursorLeftSelect", "when" : "textInputFocus"},
 {"key" : "pagedown", "command" : "cursorPageDown", "when" : "textInputFocus"},
 {"key" : "shift+pagedown", "command" : "cursorPageDownSelect", "when" : "textInputFocus"},
 {"key" : "pageup", "command" : "cursorPageUp", "when" : "textInputFocus"},
 {"key" : "shift+pageup", "command" : "cursorPageUpSelect", "when" : "textInputFocus"},
 {"key" : "right", "command" : "cursorRight", "when" : "textInputFocus"},
 {"key" : "shift+right", "command" : "cursorRightSelect", "when" : "textInputFocus"},
 {"key" : "ctrl+home", "command" : "cursorTop", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+home", "command" : "cursorTopSelect", "when" : "textInputFocus"},
 {"key" : "up", "command" : "cursorUp", "when" : "textInputFocus"},
 {"key" : "ctrl+shift+up", "command" : "cursorUpSelect", "when" : "textInputFocus"},
 {"key" : "shift+up", "command" : "cursorUpSelect", "when" : "textInputFocus"},
 {"key" : "shift+backspace", "command" : "deleteLeft", "when" : "textInputFocus"},
 {"key" : "backspace", "command" : "deleteLeft", "when" : "textInputFocus"},
 {"key" : "delete", "command" : "deleteRight", "when" : "textInputFocus"},
 {"key" : "ctrl+a", "command" : "editor.action.selectAll"},
 {"key" : "ctrl+l", "command" : "expandLineSelection", "when" : "textInputFocus"},
 {"key" : "shift+tab", "command" : "outdent", "when" : "editorTextFocus && !editorReadonly && !editorTabMovesFocus"},
 {"key" : "ctrl+shift+z", "command" : "redo"},
 {"key" : "ctrl+y", "command" : "redo"},
 {"key" : "ctrl+down", "command" : "scrollLineDown", "when" : "textInputFocus"},
 {"key" : "ctrl+up", "command" : "scrollLineUp", "when" : "textInputFocus"},
 {"key" : "alt+pagedown", "command" : "scrollPageDown", "when" : "textInputFocus"},
 {"key" : "alt+pageup", "command" : "scrollPageUp", "when" : "textInputFocus"},
 {"key" : "tab", "command" : "tab", "when" : "editorTextFocus && !editorReadonly && !editorTabMovesFocus"},
 {"key" : "ctrl+z", "command" : "undo"},
 {"key" : "shift+down", "command" : "cursorColumnSelectDown", "when" : "editorColumnSelection && textInputFocus"},
 {"key" : "shift+left", "command" : "cursorColumnSelectLeft", "when" : "editorColumnSelection && textInputFocus"},
 {"key" : "shift+pagedown", "command" : "cursorColumnSelectPageDown", "when" : "editorColumnSelection && textInputFocus"},
 {"key" : "shift+pageup", "command" : "cursorColumnSelectPageUp", "when" : "editorColumnSelection && textInputFocus"},
 {"key" : "shift+right", "command" : "cursorColumnSelectRight", "when" : "editorColumnSelection && textInputFocus"},
 {"key" : "shift+up", "command" : "cursorColumnSelectUp", "when" : "editorColumnSelection && textInputFocus"},
 {"key" : "shift+escape", "command" : "removeSecondaryCursors", "when" : "editorHasMultipleSelections && textInputFocus"},
 {"key" : "escape", "command" : "removeSecondaryCursors", "when" : "editorHasMultipleSelections && textInputFocus"},
 {"key" : "f12", "command" : "goToNextReference", "when" : "inReferenceSearchEditor || referenceSearchVisible"},
 {"key" : "f4", "command" : "goToNextReference", "when" : "inReferenceSearchEditor || referenceSearchVisible"},
 {"key" : "shift+f12", "command" : "goToPreviousReference", "when" : "inReferenceSearchEditor || referenceSearchVisible"},
 {"key" : "shift+f4", "command" : "goToPreviousReference", "when" : "inReferenceSearchEditor || referenceSearchVisible"},
 {"key" : "shift+enter", "command" : "refactorPreview.apply", "when" : "refactorPreview.enabled && refactorPreview.enabled && refactorPreview.hasCheckedChanges && focusedView == 'refactorPreview'"},
 {"key" : "alt+enter", "command" : "testing.editFocusedTest", "when" : "focusedView == 'workbench.view.testing'"},
 {"key" : "escape", "command" : "notebook.cell.quitEdit", "when" : "inputFocus && notebookEditorFocused && !editorHasMultipleSelections && !editorHasSelection && !editorHoverVisible"},
 {"key" : "ctrl+alt+enter", "command" : "notebook.cell.quitEdit", "when" : "inputFocus && notebookEditorFocused && !editorHasMultipleSelections && !editorHasSelection && !editorHoverVisible && notebookCellType == 'markup'"},
 {"key" : "ctrl+f", "command" : "actions.find", "when" : "editorFocus || editorIsOpen"},
 {"key" : "enter", "command" : "breakpointWidget.action.acceptInput", "when" : "breakpointWidgetVisible && inBreakpointWidget"},
 {"key" : "shift+escape", "command" : "closeBreakpointWidget", "when" : "breakpointWidgetVisible && textInputFocus"},
 {"key" : "escape", "command" : "closeBreakpointWidget", "when" : "breakpointWidgetVisible && textInputFocus"},
 {"key" : "ctrl+u", "command" : "cursorUndo", "when" : "textInputFocus"},
 {"key" : "ctrl+right", "command" : "cursorWordEndRight", "when" : "textInputFocus && !accessibilityModeEnabled"},
 {"key" : "ctrl+shift+right", "command" : "cursorWordEndRightSelect", "when" : "textInputFocus && !accessibilityModeEnabled"},
 {"key" : "ctrl+left", "command" : "cursorWordLeft", "when" : "textInputFocus && !accessibilityModeEnabled"},
 {"key" : "ctrl+shift+left", "command" : "cursorWordLeftSelect", "when" : "textInputFocus && !accessibilityModeEnabled"},
 {"key" : "ctrl+backspace", "command" : "deleteWordLeft", "when" : "textInputFocus && !editorReadonly"},
 {"key" : "ctrl+delete", "command" : "deleteWordRight", "when" : "textInputFocus && !editorReadonly"},
 {"key" : "ctrl+k ctrl+c", "command" : "editor.action.addCommentLine", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+d", "command" : "editor.action.addSelectionToNextFindMatch", "when" : "editorFocus"},
 {"key" : "shift+alt+oem_period", "command" : "editor.action.autoFix", "when" : "editorTextFocus && !editorReadonly && supportedCodeAction =~ /(\\s|^)quickfix\\b/"},
 {"key" : "shift+alt+a", "command" : "editor.action.blockComment", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "escape", "command" : "editor.action.cancelSelectionAnchor", "when" : "editorTextFocus && selectionAnchorSet"},
 {"key" : "ctrl+f2", "command" : "editor.action.changeAll", "when" : "editorTextFocus && editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+insert", "command" : "editor.action.clipboardCopyAction"},
 {"key" : "ctrl+c", "command" : "editor.action.clipboardCopyAction"},
 {"key" : "shift+delete", "command" : "editor.action.clipboardCutAction"},
 {"key" : "ctrl+x", "command" : "editor.action.clipboardCutAction"},
 {"key" : "shift+insert", "command" : "editor.action.clipboardPasteAction"},
 {"key" : "ctrl+v", "command" : "editor.action.clipboardPasteAction"},
 {"key" : "ctrl+oem_2", "command" : "editor.action.commentLine", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "shift+alt+down", "command" : "editor.action.copyLinesDownAction", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "shift+alt+up", "command" : "editor.action.copyLinesUpAction", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+k ctrl+k", "command" : "editor.action.defineKeybinding", "when" : "editorTextFocus && !editorReadonly && editorLangId == 'jsonc'"},
 {"key" : "ctrl+shift+k", "command" : "editor.action.deleteLines", "when" : "textInputFocus && !editorReadonly"},
 {"key" : "f7", "command" : "editor.action.diffReview.next", "when" : "isInDiffEditor"},
 {"key" : "shift+f7", "command" : "editor.action.diffReview.prev", "when" : "isInDiffEditor"},
 {"key" : "alt+f3", "command" : "editor.action.dirtydiff.next", "when" : "editorTextFocus"},
 {"key" : "shift+alt+f3", "command" : "editor.action.dirtydiff.previous", "when" : "editorTextFocus"},
 {"key" : "enter", "command" : "editor.action.extensioneditor.findNext", "when" : "webviewFindWidgetFocused && !editorFocus && activeEditor == 'workbench.editor.extension'"},
 {"key" : "shift+enter", "command" : "editor.action.extensioneditor.findPrevious", "when" : "webviewFindWidgetFocused && !editorFocus && activeEditor == 'workbench.editor.extension'"},
 {"key" : "ctrl+f", "command" : "editor.action.extensioneditor.showfind", "when" : "!editorFocus && activeEditor == 'workbench.editor.extension'"},
 {"key" : "shift+alt+f", "command" : "editor.action.formatDocument", "when" : "editorHasDocumentFormattingProvider && editorTextFocus && !editorReadonly && !inCompositeEditor"},
 {"key" : "shift+alt+f", "command" : "editor.action.formatDocument.none", "when" : "editorTextFocus && !editorHasDocumentFormattingProvider && !editorReadonly"},
 {"key" : "ctrl+k ctrl+f", "command" : "editor.action.formatSelection", "when" : "editorHasDocumentSelectionFormattingProvider && editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+f12", "command" : "editor.action.goToImplementation", "when" : "editorHasImplementationProvider && editorTextFocus && !isInEmbeddedEditor"},
 {"key" : "shift+f12", "command" : "editor.action.goToReferences", "when" : "editorHasReferenceProvider && editorTextFocus && !inReferenceSearchEditor && !isInEmbeddedEditor"},
 {"key" : "ctrl+shift+oem_period", "command" : "editor.action.inPlaceReplace.down", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+shift+oem_comma", "command" : "editor.action.inPlaceReplace.up", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+oem_6", "command" : "editor.action.indentLines", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "escape", "command" : "editor.action.inlineSuggest.hide", "when" : "inlineSuggestionVisible"},
 {"key" : "alt+oem_6", "command" : "editor.action.inlineSuggest.showNext", "when" : "inlineSuggestionVisible && !editorReadonly"},
 {"key" : "alt+oem_4", "command" : "editor.action.inlineSuggest.showPrevious", "when" : "inlineSuggestionVisible && !editorReadonly"},
 {"key" : "ctrl+alt+up", "command" : "editor.action.insertCursorAbove", "when" : "editorTextFocus"},
 {"key" : "shift+alt+i", "command" : "editor.action.insertCursorAtEndOfEachLineSelected", "when" : "editorTextFocus"},
 {"key" : "ctrl+alt+down", "command" : "editor.action.insertCursorBelow", "when" : "editorTextFocus"},
 {"key" : "ctrl+enter", "command" : "editor.action.insertLineAfter", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+shift+enter", "command" : "editor.action.insertLineBefore", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+shift+oem_5", "command" : "editor.action.jumpToBracket", "when" : "editorTextFocus"},
 {"key" : "ctrl+shift+f2", "command" : "editor.action.linkedEditing", "when" : "editorHasRenameProvider && editorTextFocus && !editorReadonly"},
 {"key" : "alt+f8", "command" : "editor.action.marker.next", "when" : "editorFocus"},
 {"key" : "f8", "command" : "editor.action.marker.nextInFiles", "when" : "editorFocus"},
 {"key" : "shift+alt+f8", "command" : "editor.action.marker.prev", "when" : "editorFocus"},
 {"key" : "shift+f8", "command" : "editor.action.marker.prevInFiles", "when" : "editorFocus"},
 {"key" : "alt+down", "command" : "editor.action.moveLinesDownAction", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "alt+up", "command" : "editor.action.moveLinesUpAction", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+k ctrl+d", "command" : "editor.action.moveSelectionToNextFindMatch", "when" : "editorFocus"},
 {"key" : "f3", "command" : "editor.action.nextMatchFindAction", "when" : "editorFocus"},
 {"key" : "enter", "command" : "editor.action.nextMatchFindAction", "when" : "editorFocus && findInputFocussed"},
 {"key" : "ctrl+f3", "command" : "editor.action.nextSelectionMatchFindAction", "when" : "editorFocus"},
 {"key" : "shift+alt+o", "command" : "editor.action.organizeImports", "when" : "editorTextFocus && !editorReadonly && supportedCodeAction =~ /(\\s|^)source\\.organizeImports\\b/"},
 {"key" : "ctrl+oem_4", "command" : "editor.action.outdentLines", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "alt+f12", "command" : "editor.action.peekDefinition", "when" : "editorHasDefinitionProvider && editorTextFocus && !inReferenceSearchEditor && !isInEmbeddedEditor"},
 {"key" : "ctrl+shift+f12", "command" : "editor.action.peekImplementation", "when" : "editorHasImplementationProvider && editorTextFocus && !inReferenceSearchEditor && !isInEmbeddedEditor"},
 {"key" : "shift+f3", "command" : "editor.action.previousMatchFindAction", "when" : "editorFocus"},
 {"key" : "shift+enter", "command" : "editor.action.previousMatchFindAction", "when" : "editorFocus && findInputFocussed"},
 {"key" : "ctrl+shift+f3", "command" : "editor.action.previousSelectionMatchFindAction", "when" : "editorFocus"},
 {"key" : "ctrl+oem_period", "command" : "editor.action.quickFix", "when" : "editorHasCodeActionsProvider && editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+shift+r", "command" : "editor.action.refactor", "when" : "editorHasCodeActionsProvider && editorTextFocus && !editorReadonly"},
 {"key" : "ctrl+k ctrl+u", "command" : "editor.action.removeCommentLine", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "f2", "command" : "editor.action.rename", "when" : "editorHasRenameProvider && editorTextFocus && !editorReadonly"},
 {"key" : "f12", "command" : "editor.action.revealDefinition", "when" : "editorHasDefinitionProvider && editorTextFocus && !isInEmbeddedEditor"},
 {"key" : "ctrl+k f12", "command" : "editor.action.revealDefinitionAside", "when" : "editorHasDefinitionProvider && editorTextFocus && !isInEmbeddedEditor"},
 {"key" : "ctrl+k ctrl+k", "command" : "editor.action.selectFromAnchorToCursor", "when" : "editorTextFocus && selectionAnchorSet"},
 {"key" : "ctrl+shift+l", "command" : "editor.action.selectHighlights", "when" : "editorFocus"},
 {"key" : "ctrl+k ctrl+b", "command" : "editor.action.setSelectionAnchor", "when" : "editorTextFocus"},
 {"key" : "alt+f1", "command" : "editor.action.showAccessibilityHelp"},
 {"key" : "shift+f10", "command" : "editor.action.showContextMenu", "when" : "textInputFocus"},
 {"key" : "ctrl+k ctrl+i", "command" : "editor.action.showHover", "when" : "editorTextFocus"},
 {"key" : "shift+alt+right", "command" : "editor.action.smartSelect.expand", "when" : "editorTextFocus"},
 {"key" : "shift+alt+left", "command" : "editor.action.smartSelect.shrink", "when" : "editorTextFocus"},
 {"key" : "ctrl+h", "command" : "editor.action.startFindReplaceAction", "when" : "editorFocus || editorIsOpen"},
 {"key" : "ctrl+m", "command" : "editor.action.toggleTabFocusMode"},
 {"key" : "alt+z", "command" : "editor.action.toggleWordWrap"},
 {"key" : "ctrl+shift+space", "command" : "editor.action.triggerParameterHints", "when" : "editorHasSignatureHelpProvider && editorTextFocus"},
 {"key" : "ctrl+i", "command" : "editor.action.triggerSuggest", "when" : "editorHasCompletionItemProvider && textInputFocus && !editorReadonly"},
 {"key" : "ctrl+space", "command" : "editor.action.triggerSuggest", "when" : "editorHasCompletionItemProvider && textInputFocus && !editorReadonly"},
 {"key" : "ctrl+k ctrl+x", "command" : "editor.action.trimTrailingWhitespace", "when" : "editorTextFocus && !editorReadonly"},
 {"key" : "enter", "command" : "editor.action.webvieweditor.findNext", "when" : "webviewFindWidgetFocused && !editorFocus && activeEditor == 'WebviewEditor'"},
 {"key" : "shift+enter", "command" : "editor.action.webvieweditor.findPrevious", "when" : "webviewFindWidgetFocused && !editorFocus && activeEditor == 'WebviewEditor'"},
 {"key" : "escape", "command" : "editor.action.webvieweditor.hideFind", "when" : "webviewFindWidgetVisible && !editorFocus && activeEditor == 'WebviewEditor'"},
 {"key" : "ctrl+f", "command" : "editor.action.webvieweditor.showFind", "when" : "webviewFindWidgetEnabled && !editorFocus && activeEditor == 'WebviewEditor'"},
 {"key" : "f7", "command" : "editor.action.wordHighlight.next", "when" : "editorTextFocus && hasWordHighlights"},
 {"key" : "shift+f7", "command" : "editor.action.wordHighlight.prev", "when" : "editorTextFocus && hasWordHighlights"},
 {"key" : "escape", "command" : "editor.cancelOperation", "when" : "cancellableOperation"},
 {"key" : "escape", "command" : "editor.debug.action.closeExceptionWidget", "when" : "exceptionWidgetVisible"},
 {"key" : "ctrl+k ctrl+i", "command" : "editor.debug.action.showDebugHover", "when" : "editorTextFocus && inDebugMode"},
 {"key" : "f9", "command" : "editor.debug.action.toggleBreakpoint", "when" : "debuggersAvailable && editorTextFocus"},
 {"key" : "tab", "command" : "editor.emmet.action.expandAbbreviation", "when" : "config.emmet.triggerExpansionOnTab && editorTextFocus && !editorReadonly && !editorTabMovesFocus"},
 {"key" : "ctrl+shift+oem_4", "command" : "editor.fold", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+0", "command" : "editor.foldAll", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+oem_2", "command" : "editor.foldAllBlockComments", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+oem_minus", "command" : "editor.foldAllExcept", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+8", "command" : "editor.foldAllMarkerRegions", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+1", "command" : "editor.foldLevel1", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+2", "command" : "editor.foldLevel2", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+3", "command" : "editor.foldLevel3", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+4", "command" : "editor.foldLevel4", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+5", "command" : "editor.foldLevel5", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+6", "command" : "editor.foldLevel6", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+7", "command" : "editor.foldLevel7", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+oem_4", "command" : "editor.foldRecursively", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "f12", "command" : "editor.gotoNextSymbolFromResult", "when" : "hasSymbols"},
 {"key" : "escape", "command" : "editor.gotoNextSymbolFromResult.cancel", "when" : "hasSymbols"},
 {"key" : "ctrl+k ctrl+l", "command" : "editor.toggleFold", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+shift+oem_6", "command" : "editor.unfold", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+j", "command" : "editor.unfoldAll", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+oem_plus", "command" : "editor.unfoldAllExcept", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+9", "command" : "editor.unfoldAllMarkerRegions", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "ctrl+k ctrl+oem_6", "command" : "editor.unfoldRecursively", "when" : "editorTextFocus && foldingEnabled"},
 {"key" : "right", "command" : "gettingStarted.next", "when" : "inWelcome && activeEditor == 'gettingStartedPage'"},
 {"key" : "down", "command" : "gettingStarted.next", "when" : "inWelcome && activeEditor == 'gettingStartedPage'"},
 {"key" : "left", "command" : "gettingStarted.prev", "when" : "inWelcome && activeEditor == 'gettingStartedPage'"},
 {"key" : "up", "command" : "gettingStarted.prev", "when" : "inWelcome && activeEditor == 'gettingStartedPage'"},
 {"key" : "tab", "command" : "insertSnippet", "when" : "editorTextFocus && hasSnippetCompletions && !editorTabMovesFocus && !inSnippetMode"},
 {"key" : "ctrl+enter", "command" : "interactive.execute", "when" : "resourceScheme == 'vscode-interactive'"},
 {"key" : "ctrl+alt+enter", "command" : "notebook.cell.execute", "when" : "notebookCellListFocused && notebookMissingKernelExtension && !notebookCellExecuting && notebookCellType == 'code' || notebookCellListFocused && !notebookCellExecuting && notebookCellType == 'code' && notebookKernelCount > 0"},
 {"key" : "alt+enter", "command" : "notebook.cell.executeAndInsertBelow", "when" : "notebookCellListFocused && notebookMissingKernelExtension && !notebookCellExecuting && notebookCellType == 'code' || notebookCellListFocused && !notebookCellExecuting && notebookCellType == 'code' && notebookKernelCount > 0"},
 {"key" : "shift+enter", "command" : "notebook.cell.executeAndSelectBelow", "when" : "notebookCellListFocused && notebookCellType == 'markup' || notebookCellListFocused && notebookMissingKernelExtension && !notebookCellExecuting && notebookCellType == 'code' || notebookCellListFocused && !notebookCellExecuting && notebookCellType == 'code' && notebookKernelCount > 0"},
 {"key" : "ctrl+shift+v", "command" : "notebook.cell.pasteAbove", "when" : "notebookEditorFocused && !inputFocus"},
 {"key" : "down", "command" : "notebook.focusNextEditor", "when" : "config.notebook.navigation.allowNavigateToSurroundingCells && editorTextFocus && inputFocus && notebookEditorFocused && notebookEditorCursorAtBoundary != 'none' && notebookEditorCursorAtBoundary != 'top'"},
 {"key" : "up", "command" : "notebook.focusPreviousEditor", "when" : "config.notebook.navigation.allowNavigateToSurroundingCells && editorTextFocus && inputFocus && notebookEditorFocused && notebookEditorCursorAtBoundary != 'bottom' && notebookEditorCursorAtBoundary != 'none'"},
 {"key" : "shift+alt+f", "command" : "notebook.formatCell", "when" : "editorHasDocumentFormattingProvider && editorTextFocus && inCompositeEditor && notebookEditable && !editorReadonly && activeEditor == 'workbench.editor.notebook'"},
 {"key" : "ctrl+enter", "command" : "openReferenceToSide", "when" : "listFocus && referenceSearchVisible && !inputFocus"},
 {"key" : "enter", "command" : "repl.action.acceptInput", "when" : "inDebugRepl && textInputFocus"},
 {"key" : "ctrl+f", "command" : "repl.action.filter", "when" : "inDebugRepl && textInputFocus"},
 {"key" : "ctrl+shift+r", "command" : "rerunSearchEditorSearch", "when" : "inSearchEditor"},
 {"key" : "escape", "command" : "search.action.focusQueryEditorWidget", "when" : "inSearchEditor"},
 {"key" : "ctrl+shift+backspace", "command" : "search.searchEditor.action.deleteFileResults", "when" : "inSearchEditor"},
 {"key" : "escape", "command" : "settings.action.clearSearchResults", "when" : "inSettingsEditor && inSettingsSearch"},
 {"key" : "down", "command" : "settings.action.focusSettingsFile", "when" : "inSettingsSearch && !suggestWidgetVisible"},
 {"key" : "ctrl+f", "command" : "settings.action.search", "when" : "inSettingsEditor"},
 {"key" : "ctrl+oem_2", "command" : "toggleExplainMode", "when" : "suggestWidgetVisible"},
 {"key" : "ctrl+k f2", "command" : "togglePeekWidgetFocus", "when" : "inReferenceSearchEditor || referenceSearchVisible"},
 {"key" : "escape", "command" : "welcome.goBack", "when" : "inWelcome && activeEditor == 'gettingStartedPage'"},
 {"key" : "alt+f5", "command" : "workbench.action.editor.nextChange", "when" : "editorTextFocus"},
 {"key" : "shift+alt+f5", "command" : "workbench.action.editor.previousChange", "when" : "editorTextFocus"},
 {"key" : "shift+escape", "command" : "workbench.action.hideComment", "when" : "commentEditorFocused"},
 {"key" : "escape", "command" : "workbench.action.hideComment", "when" : "commentEditorFocused"},
 {"key" : "ctrl+enter", "command" : "workbench.action.submitComment", "when" : "commentEditorFocused"},
 {"key" : "alt+f8", "command" : "testing.goToNextMessage", "when" : "editorFocus && testing.isPeekVisible"},
 {"key" : "shift+alt+f8", "command" : "testing.goToPreviousMessage", "when" : "editorFocus && testing.isPeekVisible"},
 {"key" : "shift+escape", "command" : "closeFindWidget", "when" : "editorFocus && findWidgetVisible && !isComposing"},
 {"key" : "escape", "command" : "closeFindWidget", "when" : "editorFocus && findWidgetVisible && !isComposing"},
 {"key" : "ctrl+alt+enter", "command" : "editor.action.replaceAll", "when" : "editorFocus && findWidgetVisible"},
 {"key" : "ctrl+shift+1", "command" : "editor.action.replaceOne", "when" : "editorFocus && findWidgetVisible"},
 {"key" : "enter", "command" : "editor.action.replaceOne", "when" : "editorFocus && findWidgetVisible && replaceInputFocussed"},
 {"key" : "alt+enter", "command" : "editor.action.selectAllMatches", "when" : "editorFocus && findWidgetVisible"},
 {"key" : "alt+c", "command" : "toggleFindCaseSensitive", "when" : "editorFocus"},
 {"key" : "alt+l", "command" : "toggleFindInSelection", "when" : "editorFocus"},
 {"key" : "alt+r", "command" : "toggleFindRegex", "when" : "editorFocus"},
 {"key" : "alt+w", "command" : "toggleFindWholeWord", "when" : "editorFocus"},
 {"key" : "alt+p", "command" : "togglePreserveCase", "when" : "editorFocus"},
 {"key" : "tab", "command" : "jumpToNextSnippetPlaceholder", "when" : "editorTextFocus && hasNextTabstop && inSnippetMode"},
 {"key" : "shift+tab", "command" : "jumpToPrevSnippetPlaceholder", "when" : "editorTextFocus && hasPrevTabstop && inSnippetMode"},
 {"key" : "escape", "command" : "leaveEditorMessage", "when" : "messageVisible"},
 {"key" : "shift+escape", "command" : "leaveSnippet", "when" : "editorTextFocus && inSnippetMode"},
 {"key" : "escape", "command" : "leaveSnippet", "when" : "editorTextFocus && inSnippetMode"},
 {"key" : "shift+escape", "command" : "closeDirtyDiff", "when" : "dirtyDiffVisible"},
 {"key" : "escape", "command" : "closeDirtyDiff", "when" : "dirtyDiffVisible"},
 {"key" : "shift+escape", "command" : "closeMarkersNavigation", "when" : "editorFocus && markersNavigationVisible"},
 {"key" : "escape", "command" : "closeMarkersNavigation", "when" : "editorFocus && markersNavigationVisible"},
 {"key" : "escape", "command" : "notifications.hideToasts", "when" : "notificationToastsVisible"},
 {"key" : "shift+escape", "command" : "closeParameterHints", "when" : "editorFocus && parameterHintsVisible"},
 {"key" : "escape", "command" : "closeParameterHints", "when" : "editorFocus && parameterHintsVisible"},
 {"key" : "alt+down", "command" : "showNextParameterHint", "when" : "editorFocus && parameterHintsMultipleSignatures && parameterHintsVisible"},
 {"key" : "down", "command" : "showNextParameterHint", "when" : "editorFocus && parameterHintsMultipleSignatures && parameterHintsVisible"},
 {"key" : "alt+up", "command" : "showPrevParameterHint", "when" : "editorFocus && parameterHintsMultipleSignatures && parameterHintsVisible"},
 {"key" : "up", "command" : "showPrevParameterHint", "when" : "editorFocus && parameterHintsMultipleSignatures && parameterHintsVisible"},
 {"key" : "shift+tab", "command" : "acceptAlternativeSelectedSuggestion", "when" : "suggestWidgetVisible && textInputFocus && textInputFocus"},
 {"key" : "shift+enter", "command" : "acceptAlternativeSelectedSuggestion", "when" : "suggestWidgetVisible && textInputFocus && textInputFocus"},
 {"key" : "tab", "command" : "acceptSelectedSuggestion", "when" : "suggestWidgetVisible && textInputFocus"},
 {"key" : "enter", "command" : "acceptSelectedSuggestion", "when" : "acceptSuggestionOnEnter && suggestWidgetVisible && suggestionMakesTextEdit && textInputFocus"},
 {"key" : "shift+escape", "command" : "hideSuggestWidget", "when" : "suggestWidgetVisible && textInputFocus"},
 {"key" : "escape", "command" : "hideSuggestWidget", "when" : "suggestWidgetVisible && textInputFocus"},
 {"key" : "tab", "command" : "insertBestCompletion", "when" : "atEndOfWord && textInputFocus && !hasOtherSuggestions && !inSnippetMode && !suggestWidgetVisible && config.editor.tabCompletion == 'on'"},
 {"key" : "tab", "command" : "insertNextSuggestion", "when" : "hasOtherSuggestions && textInputFocus && textInputFocus && !inSnippetMode && !suggestWidgetVisible && config.editor.tabCompletion == 'on'"},
 {"key" : "shift+tab", "command" : "insertPrevSuggestion", "when" : "hasOtherSuggestions && textInputFocus && textInputFocus && !inSnippetMode && !suggestWidgetVisible && config.editor.tabCompletion == 'on'"},
 {"key" : "ctrl+pagedown", "command" : "selectNextPageSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "pagedown", "command" : "selectNextPageSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "ctrl+down", "command" : "selectNextSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "down", "command" : "selectNextSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "ctrl+pageup", "command" : "selectPrevPageSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "pageup", "command" : "selectPrevPageSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "ctrl+up", "command" : "selectPrevSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "up", "command" : "selectPrevSuggestion", "when" : "suggestWidgetMultipleSuggestions && suggestWidgetVisible && textInputFocus"},
 {"key" : "ctrl+space", "command" : "toggleSuggestionDetails", "when" : "suggestWidgetVisible && textInputFocus"},
 {"key" : "ctrl+alt+space", "command" : "toggleSuggestionFocus", "when" : "suggestWidgetVisible && textInputFocus"},
 {"key" : "enter", "command" : "acceptRenameInput", "when" : "editorFocus && renameInputVisible"},
 {"key" : "shift+enter", "command" : "acceptRenameInputWithPreview", "when" : "config.editor.rename.enablePreview && editorFocus && renameInputVisible"},
 {"key" : "shift+escape", "command" : "cancelLinkedEditingInput", "when" : "LinkedEditingInputVisible && editorTextFocus"},
 {"key" : "escape", "command" : "cancelLinkedEditingInput", "when" : "LinkedEditingInputVisible && editorTextFocus"},
 {"key" : "shift+escape", "command" : "cancelRenameInput", "when" : "editorFocus && renameInputVisible"},
 {"key" : "escape", "command" : "cancelRenameInput", "when" : "editorFocus && renameInputVisible"},
 {"key" : "ctrl+shift+l", "command" : "addCursorsAtSearchResults", "when" : "fileMatchOrMatchFocus && searchViewletVisible"},
 {"key" : "ctrl+shift+oem_1", "command" : "breadcrumbs.focus", "when" : "breadcrumbsPossible"},
 {"key" : "ctrl+shift+oem_period", "command" : "breadcrumbs.focusAndSelect", "when" : "breadcrumbsPossible"},
 {"key" : "ctrl+right", "command" : "breadcrumbs.focusNext", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "right", "command" : "breadcrumbs.focusNext", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "ctrl+left", "command" : "breadcrumbs.focusPrevious", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "left", "command" : "breadcrumbs.focusPrevious", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "ctrl+enter", "command" : "breadcrumbs.revealFocused", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "space", "command" : "breadcrumbs.revealFocused", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "ctrl+enter", "command" : "breadcrumbs.revealFocusedFromTreeAside", "when" : "breadcrumbsActive && breadcrumbsVisible && listFocus && !inputFocus"},
 {"key" : "down", "command" : "breadcrumbs.selectFocused", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "enter", "command" : "breadcrumbs.selectFocused", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "ctrl+shift+oem_period", "command" : "breadcrumbs.toggleToOn", "when" : "!config.breadcrumbs.enabled"},
 {"key" : "shift+escape", "command" : "closeAccessibilityHelp", "when" : "accessibilityHelpWidgetVisible && editorFocus"},
 {"key" : "escape", "command" : "closeAccessibilityHelp", "when" : "accessibilityHelpWidgetVisible && editorFocus"},
 {"key" : "escape", "command" : "closeReplaceInFilesWidget", "when" : "replaceInputBoxFocus && searchViewletVisible"},
 {"key" : "shift+alt+c", "command" : "copyFilePath", "when" : "!editorFocus"},
 {"key" : "ctrl+k ctrl+shift+c", "command" : "copyRelativeFilePath", "when" : "!editorFocus"},
 {"key" : "alt+enter", "command" : "debug.openBreakpointToSide", "when" : "breakpointsFocused"},
 {"key" : "ctrl+enter", "command" : "debug.openBreakpointToSide", "when" : "breakpointsFocused"},
 {"key" : "ctrl+f5", "command" : "debug.openView", "when" : "!debuggersAvailable"},
 {"key" : "f5", "command" : "debug.openView", "when" : "!debuggersAvailable"},
 {"key" : "delete", "command" : "debug.removeBreakpoint", "when" : "breakpointsFocused && !breakpointInputFocused"},
 {"key" : "delete", "command" : "debug.removeWatchExpression", "when" : "watchExpressionsFocused && !expressionSelected"},
 {"key" : "alt+oem_minus", "command" : "decreaseSearchEditorContextLines", "when" : "inSearchEditor"},
 {"key" : "tab", "command" : "editor.action.inlineSuggest.commit", "when" : "inlineSuggestionVisible && !editorTabMovesFocus && !inlineSuggestionHasIndentation"},
 {"key" : "shift+f9", "command" : "editor.debug.action.toggleInlineBreakpoint", "when" : "editorTextFocus"},
 {"key" : "shift+enter", "command" : "editor.refocusCallHierarchy", "when" : "callHierarchyVisible"},
 {"key" : "shift+alt+h", "command" : "editor.showCallHierarchy", "when" : "editorHasCallHierarchyProvider && editorTextFocus && !inReferenceSearchEditor"},
 {"key" : "shift+alt+h", "command" : "editor.showIncomingCalls", "when" : "callHierarchyVisible && callHierarchyDirection == 'outgoingCalls'"},
 {"key" : "shift+alt+h", "command" : "editor.showOutgoingCalls", "when" : "callHierarchyVisible && callHierarchyDirection == 'incomingCalls'"},
 {"key" : "ctrl+enter", "command" : "explorer.openToSide", "when" : "explorerViewletFocus && explorerViewletVisible && !inputFocus"},
 {"key" : "shift+alt+f", "command" : "filesExplorer.findInFolder", "when" : "explorerResourceIsFolder && explorerViewletVisible && filesExplorerFocus && !inputFocus"},
 {"key" : "alt+down", "command" : "history.showNext", "when" : "historyNavigationEnabled && historyNavigationWidget"},
 {"key" : "down", "command" : "history.showNext", "when" : "historyNavigationEnabled && historyNavigationWidget"},
 {"key" : "alt+up", "command" : "history.showPrevious", "when" : "historyNavigationEnabled && historyNavigationWidget"},
 {"key" : "up", "command" : "history.showPrevious", "when" : "historyNavigationEnabled && historyNavigationWidget"},
 {"key" : "alt+oem_plus", "command" : "increaseSearchEditorContextLines", "when" : "inSearchEditor"},
 {"key" : "down", "command" : "interactive.history.next", "when" : "!suggestWidgetVisible && resourceScheme == 'vscode-interactive' && interactiveInputCursorAtBoundary != 'none' && interactiveInputCursorAtBoundary != 'top'"},
 {"key" : "up", "command" : "interactive.history.previous", "when" : "!suggestWidgetVisible && resourceScheme == 'vscode-interactive' && interactiveInputCursorAtBoundary != 'bottom' && interactiveInputCursorAtBoundary != 'none'"},
 {"key" : "ctrl+k ctrl+a", "command" : "keybindings.editor.addKeybinding", "when" : "inKeybindings && keybindingFocus"},
 {"key" : "escape", "command" : "keybindings.editor.clearSearchResults", "when" : "inKeybindings && inKeybindingsSearch"},
 {"key" : "ctrl+c", "command" : "keybindings.editor.copyKeybindingEntry", "when" : "inKeybindings && keybindingFocus"},
 {"key" : "enter", "command" : "keybindings.editor.defineKeybinding", "when" : "inKeybindings && keybindingFocus"},
 {"key" : "ctrl+k ctrl+e", "command" : "keybindings.editor.defineWhenExpression", "when" : "inKeybindings && keybindingFocus"},
 {"key" : "ctrl+down", "command" : "keybindings.editor.focusKeybindings", "when" : "inKeybindings && inKeybindingsSearch"},
 {"key" : "alt+k", "command" : "keybindings.editor.recordSearchKeys", "when" : "inKeybindings && inKeybindingsSearch"},
 {"key" : "delete", "command" : "keybindings.editor.removeKeybinding", "when" : "inKeybindings && keybindingFocus && !inputFocus"},
 {"key" : "ctrl+f", "command" : "keybindings.editor.searchKeybindings", "when" : "inKeybindings"},
 {"key" : "alt+p", "command" : "keybindings.editor.toggleSortByPrecedence", "when" : "inKeybindings"},
 {"key" : "escape", "command" : "list.clear", "when" : "listFocus && listHasSelectionOrFocus && !inputFocus"},
 {"key" : "left", "command" : "list.collapse", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+left", "command" : "list.collapseAll", "when" : "listFocus && !inputFocus"},
 {"key" : "right", "command" : "list.expand", "when" : "listFocus && !inputFocus"},
 {"key" : "shift+down", "command" : "list.expandSelectionDown", "when" : "listFocus && listSupportsMultiselect && !inputFocus"},
 {"key" : "shift+up", "command" : "list.expandSelectionUp", "when" : "listFocus && listSupportsMultiselect && !inputFocus"},
 {"key" : "down", "command" : "list.focusDown", "when" : "listFocus && !inputFocus"},
 {"key" : "home", "command" : "list.focusFirst", "when" : "listFocus && !inputFocus"},
 {"key" : "end", "command" : "list.focusLast", "when" : "listFocus && !inputFocus"},
 {"key" : "pagedown", "command" : "list.focusPageDown", "when" : "listFocus && !inputFocus"},
 {"key" : "pageup", "command" : "list.focusPageUp", "when" : "listFocus && !inputFocus"},
 {"key" : "up", "command" : "list.focusUp", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+down", "command" : "list.scrollDown", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+up", "command" : "list.scrollUp", "when" : "listFocus && !inputFocus"},
 {"key" : "enter", "command" : "list.select", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+a", "command" : "list.selectAll", "when" : "listFocus && listSupportsMultiselect && !inputFocus"},
 {"key" : "space", "command" : "list.toggleExpand", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+shift+enter", "command" : "list.toggleSelection", "when" : "listFocus && !inputFocus"},
 {"key" : "y", "command" : "notebook.cell.changeToCode", "when" : "notebookEditorFocused && !inputFocus && activeEditor == 'workbench.editor.notebook' && notebookCellType == 'markup'"},
 {"key" : "m", "command" : "notebook.cell.changeToMarkdown", "when" : "notebookEditorFocused && !inputFocus && activeEditor == 'workbench.editor.notebook' && notebookCellType == 'code'"},
 {"key" : "alt+delete", "command" : "notebook.cell.clearOutputs", "when" : "notebookCellEditable && notebookCellHasOutputs && notebookEditable && notebookEditorFocused && !inputFocus"},
 {"key" : "ctrl+k ctrl+c", "command" : "notebook.cell.collapseCellInput", "when" : "notebookCellListFocused && !inputFocus && !notebookCellInputIsCollapsed"},
 {"key" : "ctrl+k t", "command" : "notebook.cell.collapseCellOutput", "when" : "notebookCellHasOutputs && notebookCellListFocused && !inputFocus && !notebookCellOutputIsCollapsed"},
 {"key" : "shift+alt+down", "command" : "notebook.cell.copyDown", "when" : "notebookEditorFocused && !inputFocus"},
 {"key" : "shift+alt+up", "command" : "notebook.cell.copyUp", "when" : "notebookEditorFocused && !inputFocus"},
 {"key" : "delete", "command" : "notebook.cell.delete", "when" : "notebookEditable && notebookEditorFocused && !inputFocus"},
 {"key" : "enter", "command" : "notebook.cell.edit", "when" : "notebookCellListFocused && notebookEditable && !inputFocus"},
 {"key" : "ctrl+k ctrl+c", "command" : "notebook.cell.expandCellInput", "when" : "notebookCellInputIsCollapsed && notebookCellListFocused"},
 {"key" : "ctrl+k t", "command" : "notebook.cell.expandCellOutput", "when" : "notebookCellListFocused && notebookCellOutputIsCollapsed"},
 {"key" : "ctrl+down", "command" : "notebook.cell.focusInOutput", "when" : "notebookCellHasOutputs && notebookEditorFocused"},
 {"key" : "ctrl+up", "command" : "notebook.cell.focusOutOutput", "when" : "notebookEditorFocused"},
 {"key" : "ctrl+shift+enter", "command" : "notebook.cell.insertCodeCellAbove", "when" : "notebookCellListFocused && !inputFocus"},
 {"key" : "ctrl+enter", "command" : "notebook.cell.insertCodeCellBelow", "when" : "notebookCellListFocused && !inputFocus"},
 {"key" : "shift+alt+win+j", "command" : "notebook.cell.joinAbove", "when" : "notebookEditorFocused"},
 {"key" : "alt+win+j", "command" : "notebook.cell.joinBelow", "when" : "notebookEditorFocused"},
 {"key" : "alt+down", "command" : "notebook.cell.moveDown", "when" : "notebookEditorFocused && !inputFocus"},
 {"key" : "alt+up", "command" : "notebook.cell.moveUp", "when" : "notebookEditorFocused && !inputFocus"},
 {"key" : "ctrl+k ctrl+shift+oem_5", "command" : "notebook.cell.split", "when" : "notebookCellEditable && notebookEditable && notebookEditorFocused"},
 {"key" : "ctrl+l", "command" : "notebook.centerActiveCell", "when" : "notebookEditorFocused"},
 {"key" : "ctrl+f", "command" : "notebook.find", "when" : "notebookEditorFocused || !editorFocus && activeEditor == 'workbench.editor.notebook'"},
 {"key" : "ctrl+end", "command" : "notebook.focusBottom", "when" : "notebookEditorFocused && !inputFocus"},
 {"key" : "ctrl+down", "command" : "notebook.focusNextEditor", "when" : "notebookEditorFocused && notebookOutputFocused"},
 {"key" : "ctrl+home", "command" : "notebook.focusTop", "when" : "notebookEditorFocused && !inputFocus"},
 {"key" : "left", "command" : "notebook.fold", "when" : "notebookEditorFocused && !inputFocus && activeEditor == 'workbench.editor.notebook'"},
 {"key" : "ctrl+shift+oem_4", "command" : "notebook.fold", "when" : "notebookEditorFocused && !inputFocus && activeEditor == 'workbench.editor.notebook'"},
 {"key" : "shift+alt+f", "command" : "notebook.format", "when" : "notebookEditable && !editorTextFocus && activeEditor == 'workbench.editor.notebook'"},
 {"key" : "escape", "command" : "notebook.hideFind", "when" : "notebookEditorFocused && notebookFindWidgetFocused"},
 {"key" : "right", "command" : "notebook.unfold", "when" : "notebookEditorFocused && !inputFocus && activeEditor == 'workbench.editor.notebook'"},
 {"key" : "ctrl+shift+oem_6", "command" : "notebook.unfold", "when" : "notebookEditorFocused && !inputFocus && activeEditor == 'workbench.editor.notebook'"},
 {"key" : "delete", "command" : "notification.clear", "when" : "notificationFocus"},
 {"key" : "left", "command" : "notification.collapse", "when" : "notificationFocus"},
 {"key" : "right", "command" : "notification.expand", "when" : "notificationFocus"},
 {"key" : "enter", "command" : "notification.toggle", "when" : "notificationFocus"},
 {"key" : "space", "command" : "notification.toggle", "when" : "notificationFocus"},
 {"key" : "home", "command" : "notifications.focusFirstToast", "when" : "notificationFocus && notificationToastsVisible"},
 {"key" : "pageup", "command" : "notifications.focusFirstToast", "when" : "notificationFocus && notificationToastsVisible"},
 {"key" : "end", "command" : "notifications.focusLastToast", "when" : "notificationFocus && notificationToastsVisible"},
 {"key" : "pagedown", "command" : "notifications.focusLastToast", "when" : "notificationFocus && notificationToastsVisible"},
 {"key" : "down", "command" : "notifications.focusNextToast", "when" : "notificationFocus && notificationToastsVisible"},
 {"key" : "up", "command" : "notifications.focusPreviousToast", "when" : "notificationFocus && notificationToastsVisible"},
 {"key" : "ctrl+c", "command" : "problems.action.copy", "when" : "problemFocus"},
 {"key" : "ctrl+f", "command" : "problems.action.focusFilter", "when" : "focusedView == 'workbench.panel.markers.view'"},
 {"key" : "ctrl+down", "command" : "problems.action.focusProblemsFromFilter", "when" : "problemsFilterFocus"},
 {"key" : "enter", "command" : "problems.action.open", "when" : "problemFocus"},
 {"key" : "ctrl+enter", "command" : "problems.action.openToSide", "when" : "problemFocus"},
 {"key" : "ctrl+oem_period", "command" : "problems.action.showQuickFixes", "when" : "problemFocus"},
 {"key" : "space", "command" : "refactorPreview.toggleCheckedState", "when" : "listFocus && refactorPreview.enabled && !inputFocus"},
 {"key" : "shift+alt+r", "command" : "revealFileInOS", "when" : "!editorFocus"},
 {"key" : "enter", "command" : "revealReference", "when" : "listFocus && referenceSearchVisible && !inputFocus"},
 {"key" : "ctrl+k s", "command" : "saveAll"},
 {"key" : "ctrl+enter", "command" : "scm.acceptInput", "when" : "scmRepository"},
 {"key" : "alt+down", "command" : "scm.forceViewNextCommit", "when" : "scmRepository"},
 {"key" : "alt+up", "command" : "scm.forceViewPreviousCommit", "when" : "scmRepository"},
 {"key" : "down", "command" : "scm.viewNextCommit", "when" : "scmInputIsInLastPosition && scmRepository && !suggestWidgetVisible"},
 {"key" : "up", "command" : "scm.viewPreviousCommit", "when" : "scmInputIsInFirstPosition && scmRepository && !suggestWidgetVisible"},
 {"key" : "escape", "command" : "search.action.cancel", "when" : "listFocus && searchViewletVisible && !inputFocus && searchState != '0'"},
 {"key" : "ctrl+c", "command" : "search.action.copyMatch", "when" : "fileMatchOrMatchFocus"},
 {"key" : "shift+alt+c", "command" : "search.action.copyPath", "when" : "fileMatchOrFolderMatchWithResourceFocus"},
 {"key" : "f4", "command" : "search.action.focusNextSearchResult", "when" : "hasSearchResult || inSearchEditor"},
 {"key" : "shift+f4", "command" : "search.action.focusPreviousSearchResult", "when" : "hasSearchResult || inSearchEditor"},
 {"key" : "ctrl+up", "command" : "search.action.focusSearchFromResults", "when" : "firstMatchFocus && searchViewletVisible"},
 {"key" : "alt+enter", "command" : "search.action.openInEditor", "when" : "hasSearchResult && searchViewletFocus"},
 {"key" : "enter", "command" : "search.action.openResult", "when" : "fileMatchOrMatchFocus && searchViewletVisible"},
 {"key" : "ctrl+enter", "command" : "search.action.openResultToSide", "when" : "fileMatchOrMatchFocus && searchViewletVisible"},
 {"key" : "delete", "command" : "search.action.remove", "when" : "fileMatchOrMatchFocus && searchViewletVisible"},
 {"key" : "ctrl+shift+1", "command" : "search.action.replace", "when" : "matchFocus && replaceActive && searchViewletVisible"},
 {"key" : "ctrl+alt+enter", "command" : "search.action.replaceAll", "when" : "replaceActive && searchViewletVisible && !findWidgetVisible"},
 {"key" : "ctrl+shift+enter", "command" : "search.action.replaceAllInFile", "when" : "fileMatchFocus && replaceActive && searchViewletVisible"},
 {"key" : "ctrl+shift+1", "command" : "search.action.replaceAllInFile", "when" : "fileMatchFocus && replaceActive && searchViewletVisible"},
 {"key" : "ctrl+shift+enter", "command" : "search.action.replaceAllInFolder", "when" : "folderMatchFocus && replaceActive && searchViewletVisible"},
 {"key" : "ctrl+shift+1", "command" : "search.action.replaceAllInFolder", "when" : "folderMatchFocus && replaceActive && searchViewletVisible"},
 {"key" : "ctrl+down", "command" : "search.focus.nextInputBox", "when" : "inSearchEditor && inputBoxFocus || inputBoxFocus && searchViewletVisible"},
 {"key" : "ctrl+up", "command" : "search.focus.previousInputBox", "when" : "inSearchEditor && inputBoxFocus || inputBoxFocus && searchViewletVisible && !searchInputBoxFocus"},
 {"key" : "ctrl+shift+l", "command" : "selectAllSearchEditorMatches", "when" : "inSearchEditor"},
 {"key" : "escape", "command" : "settings.action.focusLevelUp", "when" : "inSettingsEditor && !inSettingsJSONEditor && !inSettingsSearch"},
 {"key" : "enter", "command" : "settings.action.focusSettingControl", "when" : "settingRowFocus"},
 {"key" : "down", "command" : "settings.action.focusSettingsFromSearch", "when" : "inSettingsSearch && !suggestWidgetVisible"},
 {"key" : "enter", "command" : "settings.action.focusSettingsList", "when" : "inSettingsEditor && settingsTocRowFocus"},
 {"key" : "left", "command" : "settings.action.focusTOC", "when" : "inSettingsEditor && settingRowFocus"},
 {"key" : "shift+f9", "command" : "settings.action.showContextMenu", "when" : "inSettingsEditor"},
 {"key" : "ctrl+oem_1 ctrl+x", "command" : "testing.cancelRun"},
 {"key" : "ctrl+oem_1 ctrl+a", "command" : "testing.debugAll"},
 {"key" : "ctrl+oem_1 ctrl+c", "command" : "testing.debugAtCursor", "when" : "editorTextFocus"},
 {"key" : "ctrl+oem_1 ctrl+f", "command" : "testing.debugCurrentFile", "when" : "editorTextFocus"},
 {"key" : "ctrl+oem_1 ctrl+e", "command" : "testing.debugFailTests"},
 {"key" : "ctrl+oem_1 ctrl+l", "command" : "testing.debugLastRun"},
 {"key" : "ctrl+oem_1 m", "command" : "testing.openOutputPeek"},
 {"key" : "ctrl+oem_1 e", "command" : "testing.reRunFailTests"},
 {"key" : "ctrl+oem_1 l", "command" : "testing.reRunLastRun"},
 {"key" : "ctrl+oem_1 a", "command" : "testing.runAll"},
 {"key" : "ctrl+oem_1 c", "command" : "testing.runAtCursor", "when" : "editorTextFocus"},
 {"key" : "ctrl+oem_1 f", "command" : "testing.runCurrentFile", "when" : "editorTextFocus"},
 {"key" : "ctrl+oem_1 ctrl+o", "command" : "testing.showMostRecentOutput", "when" : "testing.hasAnyResults"},
 {"key" : "alt+c", "command" : "toggleSearchCaseSensitive", "when" : "searchViewletFocus"},
 {"key" : "alt+c", "command" : "toggleSearchEditorCaseSensitive", "when" : "inSearchEditor && searchInputBoxFocus"},
 {"key" : "alt+l", "command" : "toggleSearchEditorContextLines", "when" : "inSearchEditor"},
 {"key" : "alt+r", "command" : "toggleSearchEditorRegex", "when" : "inSearchEditor && searchInputBoxFocus"},
 {"key" : "alt+w", "command" : "toggleSearchEditorWholeWord", "when" : "inSearchEditor && searchInputBoxFocus"},
 {"key" : "alt+p", "command" : "toggleSearchPreserveCase", "when" : "searchViewletFocus"},
 {"key" : "alt+r", "command" : "toggleSearchRegex", "when" : "searchViewletFocus"},
 {"key" : "alt+w", "command" : "toggleSearchWholeWord", "when" : "searchViewletFocus"},
 {"key" : "ctrl+alt+win+n", "command" : "welcome.showNewFileEntries"},
 {"key" : "ctrl+w", "command" : "workbench.action.closeActiveEditor"},
 {"key" : "ctrl+f4", "command" : "workbench.action.closeActiveEditor"},
 {"key" : "ctrl+k ctrl+w", "command" : "workbench.action.closeAllEditors"},
 {"key" : "ctrl+k ctrl+shift+w", "command" : "workbench.action.closeAllGroups"},
 {"key" : "ctrl+k w", "command" : "workbench.action.closeEditorsInGroup"},
 {"key" : "ctrl+k f", "command" : "workbench.action.closeFolder", "when" : "emptyWorkspaceSupport"},
 {"key" : "ctrl+w", "command" : "workbench.action.closeGroup", "when" : "activeEditorGroupEmpty && multipleEditorGroups"},
 {"key" : "ctrl+f4", "command" : "workbench.action.closeGroup", "when" : "activeEditorGroupEmpty && multipleEditorGroups"},
 {"key" : "shift+escape", "command" : "workbench.action.closeQuickOpen", "when" : "inQuickOpen"},
 {"key" : "escape", "command" : "workbench.action.closeQuickOpen", "when" : "inQuickOpen"},
 {"key" : "ctrl+k u", "command" : "workbench.action.closeUnmodifiedEditors"},
 {"key" : "ctrl+shift+w", "command" : "workbench.action.closeWindow"},
 {"key" : "alt+f4", "command" : "workbench.action.closeWindow"},
 {"key" : "alt+f5", "command" : "workbench.action.compareEditor.nextChange", "when" : "textCompareEditorVisible"},
 {"key" : "shift+alt+f5", "command" : "workbench.action.compareEditor.previousChange", "when" : "textCompareEditorVisible"},
 {"key" : "shift+f5", "command" : "workbench.action.debug.disconnect", "when" : "focusedSessionIsAttach && inDebugMode"},
 {"key" : "ctrl+shift+f5", "command" : "workbench.action.debug.restart", "when" : "inDebugMode"},
 {"key" : "ctrl+f5", "command" : "workbench.action.debug.run", "when" : "debuggersAvailable && debugState != 'initializing'"},
 {"key" : "f5", "command" : "workbench.action.debug.start", "when" : "debuggersAvailable && debugState == 'inactive'"},
 {"key" : "shift+f11", "command" : "workbench.action.debug.stepOut", "when" : "debugState == 'stopped'"},
 {"key" : "f10", "command" : "workbench.action.debug.stepOver", "when" : "debugState == 'stopped'"},
 {"key" : "shift+f5", "command" : "workbench.action.debug.stop", "when" : "inDebugMode && !focusedSessionIsAttach"},
 {"key" : "ctrl+k m", "command" : "workbench.action.editor.changeLanguageMode", "when" : "!notebookEditorFocused"},
 {"key" : "ctrl+k p", "command" : "workbench.action.files.copyPathOfActiveFile"},
 {"key" : "ctrl+n", "command" : "workbench.action.files.newUntitledFile"},
 {"key" : "ctrl+o", "command" : "workbench.action.files.openFile"},
 {"key" : "ctrl+k ctrl+o", "command" : "workbench.action.files.openFolder"},
 {"key" : "ctrl+o", "command" : "workbench.action.files.openLocalFile", "when" : "remoteFileDialogVisible"},
 {"key" : "ctrl+k ctrl+o", "command" : "workbench.action.files.openLocalFolder", "when" : "remoteFileDialogVisible"},
 {"key" : "ctrl+k r", "command" : "workbench.action.files.revealActiveFileInWindows"},
 {"key" : "ctrl+s", "command" : "workbench.action.files.save"},
 {"key" : "ctrl+shift+s", "command" : "workbench.action.files.saveAs"},
 {"key" : "ctrl+shift+s", "command" : "workbench.action.files.saveLocalFile", "when" : "remoteFileDialogVisible"},
 {"key" : "ctrl+k ctrl+shift+s", "command" : "workbench.action.files.saveWithoutFormatting"},
 {"key" : "ctrl+k o", "command" : "workbench.action.files.showOpenedFileInNewWindow", "when" : "emptyWorkspaceSupport"},
 {"key" : "ctrl+shift+f", "command" : "workbench.action.findInFiles"},
 {"key" : "ctrl+k ctrl+up", "command" : "workbench.action.focusAboveGroup"},
 {"key" : "ctrl+k ctrl+down", "command" : "workbench.action.focusBelowGroup"},
 {"key" : "ctrl+8", "command" : "workbench.action.focusEighthEditorGroup"},
 {"key" : "ctrl+5", "command" : "workbench.action.focusFifthEditorGroup"},
 {"key" : "ctrl+1", "command" : "workbench.action.focusFirstEditorGroup"},
 {"key" : "ctrl+4", "command" : "workbench.action.focusFourthEditorGroup"},
 {"key" : "ctrl+k ctrl+left", "command" : "workbench.action.focusLeftGroup"},
 {"key" : "f6", "command" : "workbench.action.focusNextPart"},
 {"key" : "shift+f6", "command" : "workbench.action.focusPreviousPart"},
 {"key" : "ctrl+k ctrl+right", "command" : "workbench.action.focusRightGroup"},
 {"key" : "ctrl+2", "command" : "workbench.action.focusSecondEditorGroup"},
 {"key" : "ctrl+7", "command" : "workbench.action.focusSeventhEditorGroup"},
 {"key" : "ctrl+0", "command" : "workbench.action.focusSideBar"},
 {"key" : "ctrl+6", "command" : "workbench.action.focusSixthEditorGroup"},
 {"key" : "ctrl+3", "command" : "workbench.action.focusThirdEditorGroup"},
 {"key" : "ctrl+g", "command" : "workbench.action.gotoLine"},
 {"key" : "ctrl+shift+o", "command" : "workbench.action.gotoSymbol"},
 {"key" : "escape", "command" : "workbench.action.hideInterfaceOverview", "when" : "interfaceOverviewVisible"},
 {"key" : "down", "command" : "workbench.action.interactivePlayground.arrowDown", "when" : "interactivePlaygroundFocus && !editorTextFocus"},
 {"key" : "up", "command" : "workbench.action.interactivePlayground.arrowUp", "when" : "interactivePlaygroundFocus && !editorTextFocus"},
 {"key" : "pagedown", "command" : "workbench.action.interactivePlayground.pageDown", "when" : "interactivePlaygroundFocus && !editorTextFocus"},
 {"key" : "pageup", "command" : "workbench.action.interactivePlayground.pageUp", "when" : "interactivePlaygroundFocus && !editorTextFocus"},
 {"key" : "ctrl+k enter", "command" : "workbench.action.keepEditor"},
 {"key" : "ctrl+k ctrl+r", "command" : "workbench.action.keybindingsReference"},
 {"key" : "ctrl+9", "command" : "workbench.action.lastEditorInGroup"},
 {"key" : "alt+0", "command" : "workbench.action.lastEditorInGroup"},
 {"key" : "ctrl+k down", "command" : "workbench.action.moveActiveEditorGroupDown"},
 {"key" : "ctrl+k left", "command" : "workbench.action.moveActiveEditorGroupLeft"},
 {"key" : "ctrl+k right", "command" : "workbench.action.moveActiveEditorGroupRight"},
 {"key" : "ctrl+k up", "command" : "workbench.action.moveActiveEditorGroupUp"},
 {"key" : "ctrl+shift+pageup", "command" : "workbench.action.moveEditorLeftInGroup"},
 {"key" : "ctrl+shift+pagedown", "command" : "workbench.action.moveEditorRightInGroup"},
 {"key" : "shift+alt+1", "command" : "workbench.action.moveEditorToFirstGroup"},
 {"key" : "shift+alt+9", "command" : "workbench.action.moveEditorToLastGroup"},
 {"key" : "ctrl+alt+right", "command" : "workbench.action.moveEditorToNextGroup"},
 {"key" : "ctrl+alt+left", "command" : "workbench.action.moveEditorToPreviousGroup"},
 {"key" : "alt+left", "command" : "workbench.action.navigateBack"},
 {"key" : "alt+right", "command" : "workbench.action.navigateForward"},
 {"key" : "ctrl+k ctrl+q", "command" : "workbench.action.navigateToLastEditLocation"},
 {"key" : "ctrl+shift+n", "command" : "workbench.action.newWindow"},
 {"key" : "ctrl+pagedown", "command" : "workbench.action.nextEditor"},
 {"key" : "ctrl+k ctrl+pagedown", "command" : "workbench.action.nextEditorInGroup"},
 {"key" : "alt+1", "command" : "workbench.action.openEditorAtIndex1"},
 {"key" : "alt+2", "command" : "workbench.action.openEditorAtIndex2"},
 {"key" : "alt+3", "command" : "workbench.action.openEditorAtIndex3"},
 {"key" : "alt+4", "command" : "workbench.action.openEditorAtIndex4"},
 {"key" : "alt+5", "command" : "workbench.action.openEditorAtIndex5"},
 {"key" : "alt+6", "command" : "workbench.action.openEditorAtIndex6"},
 {"key" : "alt+7", "command" : "workbench.action.openEditorAtIndex7"},
 {"key" : "alt+8", "command" : "workbench.action.openEditorAtIndex8"},
 {"key" : "alt+9", "command" : "workbench.action.openEditorAtIndex9"},
 {"key" : "ctrl+k ctrl+s", "command" : "workbench.action.openGlobalKeybindings"},
 {"key" : "ctrl+r", "command" : "workbench.action.openRecent"},
 {"key" : "ctrl+oem_comma", "command" : "workbench.action.openSettings"},
 {"key" : "ctrl+shift+u", "command" : "workbench.action.output.toggleOutput", "when" : "workbench.panel.output.active"},
 {"key" : "ctrl+k shift+enter", "command" : "workbench.action.pinEditor", "when" : "!activeEditorIsPinned"},
 {"key" : "ctrl+pageup", "command" : "workbench.action.previousEditor"},
 {"key" : "ctrl+k ctrl+pageup", "command" : "workbench.action.previousEditorInGroup"},
 {"key" : "ctrl+e", "command" : "workbench.action.quickOpen"},
 {"key" : "ctrl+p", "command" : "workbench.action.quickOpen"},
 {"key" : "ctrl+shift+tab", "command" : "workbench.action.quickOpenLeastRecentlyUsedEditorInGroup"},
 {"key" : "ctrl+tab", "command" : "workbench.action.quickOpenPreviousRecentlyUsedEditorInGroup"},
 {"key" : "ctrl+q", "command" : "workbench.action.quickOpenView"},
 {"key" : "ctrl+shift+t", "command" : "workbench.action.reopenClosedEditor"},
 {"key" : "ctrl+shift+h", "command" : "workbench.action.replaceInFiles"},
 {"key" : "ctrl+shift+j", "command" : "workbench.action.search.toggleQueryDetails", "when" : "inSearchEditor || searchViewletFocus"},
 {"key" : "ctrl+k ctrl+t", "command" : "workbench.action.selectTheme"},
 {"key" : "ctrl+k ctrl+p", "command" : "workbench.action.showAllEditors"},
 {"key" : "ctrl+t", "command" : "workbench.action.showAllSymbols"},
 {"key" : "f1", "command" : "workbench.action.showCommands"},
 {"key" : "ctrl+shift+p", "command" : "workbench.action.showCommands"},
 {"key" : "ctrl+oem_5", "command" : "workbench.action.splitEditor"},
 {"key" : "ctrl+k ctrl+oem_5", "command" : "workbench.action.splitEditorOrthogonal"},
 {"key" : "ctrl+shift+b", "command" : "workbench.action.tasks.build"},
 {"key" : "escape", "command" : "workbench.action.terminal.clearSelection", "when" : "terminalFocus && terminalProcessSupported && terminalTextSelected && !terminalFindVisible"},
 {"key" : "ctrl+shift+c", "command" : "workbench.action.terminal.copySelection", "when" : "terminalFocus && terminalProcessSupported && terminalTextSelected && terminalTextSelected"},
 {"key" : "ctrl+c", "command" : "workbench.action.terminal.copySelection", "when" : "terminalFocus && terminalProcessSupported && terminalTextSelected && terminalTextSelected"},
 {"key" : "f3", "command" : "workbench.action.terminal.findNext", "when" : "terminalFindFocused && terminalProcessSupported || terminalFocus && terminalProcessSupported"},
 {"key" : "shift+enter", "command" : "workbench.action.terminal.findNext", "when" : "terminalFindFocused && terminalProcessSupported"},
 {"key" : "shift+f3", "command" : "workbench.action.terminal.findPrevious", "when" : "terminalFindFocused && terminalProcessSupported || terminalFocus && terminalProcessSupported"},
 {"key" : "enter", "command" : "workbench.action.terminal.findPrevious", "when" : "terminalFindFocused && terminalProcessSupported"},
 {"key" : "ctrl+f", "command" : "workbench.action.terminal.focusFind", "when" : "terminalFindFocused && terminalProcessSupported || terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+pagedown", "command" : "workbench.action.terminal.focusNext", "when" : "terminalFocus && terminalProcessSupported && !terminalEditorFocus"},
 {"key" : "alt+down", "command" : "workbench.action.terminal.focusNextPane", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "alt+right", "command" : "workbench.action.terminal.focusNextPane", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+pageup", "command" : "workbench.action.terminal.focusPrevious", "when" : "terminalFocus && terminalProcessSupported && !terminalEditorFocus"},
 {"key" : "alt+up", "command" : "workbench.action.terminal.focusPreviousPane", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "alt+left", "command" : "workbench.action.terminal.focusPreviousPane", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+shift+oem_5", "command" : "workbench.action.terminal.focusTabs", "when" : "terminalFocus && terminalProcessSupported || terminalProcessSupported && terminalTabsFocus"},
 {"key" : "shift+escape", "command" : "workbench.action.terminal.hideFind", "when" : "terminalFindVisible && terminalFocus && terminalProcessSupported"},
 {"key" : "escape", "command" : "workbench.action.terminal.hideFind", "when" : "terminalFindVisible && terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+w", "command" : "workbench.action.terminal.killEditor", "when" : "terminalFocus && terminalProcessSupported && resourceScheme == 'vscode-terminal'"},
 {"key" : "ctrl+f4", "command" : "workbench.action.terminal.killEditor", "when" : "terminalFocus && terminalProcessSupported && resourceScheme == 'vscode-terminal'"},
 {"key" : "delete", "command" : "workbench.action.terminal.killInstance", "when" : "terminalIsOpen && terminalTabsFocus || terminalProcessSupported && terminalTabsFocus"},
 {"key" : "escape", "command" : "workbench.action.terminal.navigationModeExit", "when" : "accessibilityModeEnabled && terminalA11yTreeFocus && terminalProcessSupported"},
 {"key" : "ctrl+down", "command" : "workbench.action.terminal.navigationModeFocusNext", "when" : "accessibilityModeEnabled && terminalA11yTreeFocus && terminalProcessSupported || accessibilityModeEnabled && terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+up", "command" : "workbench.action.terminal.navigationModeFocusPrevious", "when" : "accessibilityModeEnabled && terminalA11yTreeFocus && terminalProcessSupported || accessibilityModeEnabled && terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+shift+oem_3", "command" : "workbench.action.terminal.new", "when" : "terminalProcessSupported"},
 {"key" : "ctrl+shift+c", "command" : "workbench.action.terminal.openNativeConsole", "when" : "!terminalFocus"},
 {"key" : "ctrl+shift+v", "command" : "workbench.action.terminal.paste", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+v", "command" : "workbench.action.terminal.paste", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "f2", "command" : "workbench.action.terminal.renameInstance", "when" : "terminalProcessSupported && terminalTabsFocus && terminalTabsSingularSelection"},
 {"key" : "ctrl+alt+pagedown", "command" : "workbench.action.terminal.scrollDown", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "shift+pagedown", "command" : "workbench.action.terminal.scrollDownPage", "when" : "terminalFocus && terminalProcessSupported && !terminalAltBufferActive"},
 {"key" : "ctrl+end", "command" : "workbench.action.terminal.scrollToBottom", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+home", "command" : "workbench.action.terminal.scrollToTop", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+alt+pageup", "command" : "workbench.action.terminal.scrollUp", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "shift+pageup", "command" : "workbench.action.terminal.scrollUpPage", "when" : "terminalFocus && terminalProcessSupported && !terminalAltBufferActive"},
 {"key" : "ctrl+v", "command" : "workbench.action.terminal.sendSequence", "when" : "terminalFocus && !accessibilityModeEnabled && terminalShellType == 'pwsh'", "args" : {"text" : "\u0016"}},
 {"key" : "ctrl+backspace", "command" : "workbench.action.terminal.sendSequence", "when" : "terminalFocus", "args" : {"text" : "\u0017"}},
 {"key" : "ctrl+backspace", "command" : "workbench.action.terminal.sendSequence", "when" : "terminalFocus && terminalShellType == 'cmd'", "args" : {"text" : "\b"}},
 {"key" : "ctrl+delete", "command" : "workbench.action.terminal.sendSequence", "when" : "terminalFocus", "args" : {"text" : "\u001bd"}},
 {"key" : "ctrl+shift+5", "command" : "workbench.action.terminal.split", "when" : "terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+shift+5", "command" : "workbench.action.terminal.splitInstance", "when" : "terminalProcessSupported && terminalTabsFocus"},
 {"key" : "alt+c", "command" : "workbench.action.terminal.toggleFindCaseSensitive", "when" : "terminalFindFocused && terminalProcessSupported || terminalFocus && terminalProcessSupported"},
 {"key" : "alt+r", "command" : "workbench.action.terminal.toggleFindRegex", "when" : "terminalFindFocused && terminalProcessSupported || terminalFocus && terminalProcessSupported"},
 {"key" : "alt+w", "command" : "workbench.action.terminal.toggleFindWholeWord", "when" : "terminalFindFocused && terminalProcessSupported || terminalFocus && terminalProcessSupported"},
 {"key" : "ctrl+oem_3", "command" : "workbench.action.terminal.toggleTerminal", "when" : "terminal.active"},
 {"key" : "shift+alt+0", "command" : "workbench.action.toggleEditorGroupLayout"},
 {"key" : "f11", "command" : "workbench.action.toggleFullScreen", "when" : "!isIOS"},
 {"key" : "ctrl+j", "command" : "workbench.action.togglePanel"},
 {"key" : "ctrl+b", "command" : "workbench.action.toggleSidebarVisibility"},
 {"key" : "ctrl+k z", "command" : "workbench.action.toggleZenMode"},
 {"key" : "ctrl+k shift+enter", "command" : "workbench.action.unpinEditor", "when" : "activeEditorIsPinned"},
 {"key" : "ctrl+numpad_add", "command" : "workbench.action.zoomIn"},
 {"key" : "ctrl+shift+oem_plus", "command" : "workbench.action.zoomIn"},
 {"key" : "ctrl+oem_plus", "command" : "workbench.action.zoomIn"},
 {"key" : "ctrl+numpad_subtract", "command" : "workbench.action.zoomOut"},
 {"key" : "ctrl+shift+oem_minus", "command" : "workbench.action.zoomOut"},
 {"key" : "ctrl+oem_minus", "command" : "workbench.action.zoomOut"},
 {"key" : "ctrl+numpad0", "command" : "workbench.action.zoomReset"},
 {"key" : "ctrl+shift+m", "command" : "workbench.actions.view.problems", "when" : "workbench.panel.markers.view.active"},
 {"key" : "escape", "command" : "workbench.banner.focusBanner", "when" : "bannerFocused"},
 {"key" : "down", "command" : "workbench.banner.focusNextAction", "when" : "bannerFocused"},
 {"key" : "right", "command" : "workbench.banner.focusNextAction", "when" : "bannerFocused"},
 {"key" : "up", "command" : "workbench.banner.focusPreviousAction", "when" : "bannerFocused"},
 {"key" : "left", "command" : "workbench.banner.focusPreviousAction", "when" : "bannerFocused"},
 {"key" : "ctrl+shift+y", "command" : "workbench.debug.action.toggleRepl", "when" : "workbench.panel.repl.view.active"},
 {"key" : "ctrl+k ctrl+m", "command" : "workbench.extensions.action.showRecommendedKeymapExtensions"},
 {"key" : "ctrl+k c", "command" : "workbench.files.action.compareWithClipboard"},
 {"key" : "ctrl+k d", "command" : "workbench.files.action.compareWithSaved"},
 {"key" : "ctrl+k e", "command" : "workbench.files.action.focusOpenEditorsView", "when" : "workbench.explorer.openEditorsView.active"},
 {"key" : "escape", "command" : "workbench.statusBar.clearFocus", "when" : "statusBarFocused"},
 {"key" : "home", "command" : "workbench.statusBar.focusFirst", "when" : "statusBarFocused"},
 {"key" : "end", "command" : "workbench.statusBar.focusLast", "when" : "statusBarFocused"},
 {"key" : "down", "command" : "workbench.statusBar.focusNext", "when" : "statusBarFocused"},
 {"key" : "right", "command" : "workbench.statusBar.focusNext", "when" : "statusBarFocused"},
 {"key" : "up", "command" : "workbench.statusBar.focusPrevious", "when" : "statusBarFocused"},
 {"key" : "left", "command" : "workbench.statusBar.focusPrevious", "when" : "statusBarFocused"},
 {"key" : "ctrl+shift+d", "command" : "workbench.view.debug", "when" : "viewContainer.workbench.view.debug.enabled"},
 {"key" : "ctrl+shift+e", "command" : "workbench.view.explorer", "when" : "viewContainer.workbench.view.explorer.enabled"},
 {"key" : "ctrl+shift+x", "command" : "workbench.view.extensions", "when" : "viewContainer.workbench.view.extensions.enabled"},
 {"key" : "ctrl+shift+g", "command" : "workbench.view.scm", "when" : "workbench.scm.active"},
 {"key" : "ctrl+shift+f", "command" : "workbench.view.search", "when" : "workbench.view.search.active && neverMatch =~ /doesNotMatch/"},
 {"key" : "ctrl+right", "command" : "breadcrumbs.focusNextWithPicker", "when" : "breadcrumbsActive && breadcrumbsVisible && listFocus && !inputFocus"},
 {"key" : "ctrl+left", "command" : "breadcrumbs.focusPreviousWithPicker", "when" : "breadcrumbsActive && breadcrumbsVisible && listFocus && !inputFocus"},
 {"key" : "escape", "command" : "breadcrumbs.selectEditor", "when" : "breadcrumbsActive && breadcrumbsVisible"},
 {"key" : "ctrl+k down", "command" : "views.moveViewDown", "when" : "focusedView != ''"},
 {"key" : "ctrl+k left", "command" : "views.moveViewLeft", "when" : "focusedView != ''"},
 {"key" : "ctrl+k right", "command" : "views.moveViewRight", "when" : "focusedView != ''"},
 {"key" : "ctrl+k up", "command" : "views.moveViewUp", "when" : "focusedView != ''"},
 {"key" : "f6", "command" : "workbench.action.debug.pause", "when" : "debugState == 'running'"},
 {"key" : "f2", "command" : "debug.renameWatchExpression", "when" : "watchExpressionsFocused"},
 {"key" : "f2", "command" : "debug.setVariable", "when" : "variablesFocused"},
 {"key" : "space", "command" : "debug.toggleBreakpoint", "when" : "breakpointsFocused && !inputFocus"},
 {"key" : "shift+delete", "command" : "deleteFile", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceReadonly && !inputFocus"},
 {"key" : "delete", "command" : "deleteFile", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceMoveableToTrash && !explorerResourceReadonly && !inputFocus"},
 {"key" : "escape", "command" : "editor.closeCallHierarchy", "when" : "callHierarchyVisible && !config.editor.stablePeek"},
 {"key" : "enter", "command" : "explorer.openAndPassFocus", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceIsFolder && !inputFocus"},
 {"key" : "escape", "command" : "filesExplorer.cancelCut", "when" : "explorerResourceCut && explorerViewletVisible && filesExplorerFocus && !inputFocus"},
 {"key" : "ctrl+c", "command" : "filesExplorer.copy", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceIsRoot && !inputFocus"},
 {"key" : "ctrl+x", "command" : "filesExplorer.cut", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceIsRoot && !explorerResourceReadonly && !inputFocus"},
 {"key" : "space", "command" : "filesExplorer.openFilePreserveFocus", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceIsFolder && !inputFocus"},
 {"key" : "ctrl+v", "command" : "filesExplorer.paste", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceReadonly && !inputFocus"},
 {"key" : "home", "command" : "firstCompressedFolder", "when" : "explorerViewletCompressedFocus && explorerViewletVisible && filesExplorerFocus && !explorerViewletCompressedFirstFocus && !inputFocus"},
 {"key" : "end", "command" : "lastCompressedFolder", "when" : "explorerViewletCompressedFocus && explorerViewletVisible && filesExplorerFocus && !explorerViewletCompressedLastFocus && !inputFocus"},
 {"key" : "delete", "command" : "moveFileToTrash", "when" : "explorerResourceMoveableToTrash && explorerViewletVisible && filesExplorerFocus && !explorerResourceReadonly && !inputFocus"},
 {"key" : "right", "command" : "nextCompressedFolder", "when" : "explorerViewletCompressedFocus && explorerViewletVisible && filesExplorerFocus && !explorerViewletCompressedLastFocus && !inputFocus"},
 {"key" : "left", "command" : "previousCompressedFolder", "when" : "explorerViewletCompressedFocus && explorerViewletVisible && filesExplorerFocus && !explorerViewletCompressedFirstFocus && !inputFocus"},
 {"key" : "delete", "command" : "remote.tunnel.closeInline", "when" : "tunnelCloseable && tunnelViewFocus"},
 {"key" : "ctrl+c", "command" : "remote.tunnel.copyAddressInline", "when" : "tunnelViewFocus && tunnelType == 'Detected' && tunnelViewMultiSelection == 'undefined' || tunnelViewFocus && tunnelType == 'Forwarded' && tunnelViewMultiSelection == 'undefined'"},
 {"key" : "f2", "command" : "remote.tunnel.label", "when" : "tunnelViewFocus && tunnelType == 'Forwarded' && tunnelViewMultiSelection == 'undefined'"},
 {"key" : "f2", "command" : "renameFile", "when" : "explorerViewletVisible && filesExplorerFocus && !explorerResourceIsRoot && !explorerResourceReadonly && !inputFocus"},
 {"key" : "f5", "command" : "workbench.action.debug.continue", "when" : "debugState == 'stopped'"},
 {"key" : "f11", "command" : "workbench.action.debug.stepInto", "when" : "debugState != 'inactive'"},
 {"key" : "shift+escape", "command" : "closeReferenceSearch", "when" : "referenceSearchVisible && !config.editor.stablePeek"},
 {"key" : "escape", "command" : "closeReferenceSearch", "when" : "referenceSearchVisible && !config.editor.stablePeek"},
 {"key" : "escape", "command" : "notifications.hideList", "when" : "notificationCenterVisible"},
 {"key" : "alt+left", "command" : "workbench.action.quickInputBack", "when" : "inQuickOpen"},
 {"key" : "ctrl+tab", "command" : "workbench.action.quickOpenNavigateNextInEditorPicker", "when" : "inEditorsPicker && inQuickOpen"},
 {"key" : "ctrl+e", "command" : "workbench.action.quickOpenNavigateNextInFilePicker", "when" : "inFilesPicker && inQuickOpen"},
 {"key" : "ctrl+p", "command" : "workbench.action.quickOpenNavigateNextInFilePicker", "when" : "inFilesPicker && inQuickOpen"},
 {"key" : "ctrl+r", "command" : "workbench.action.quickOpenNavigateNextInRecentFilesPicker", "when" : "inQuickOpen && inRecentFilesPicker"},
 {"key" : "ctrl+q", "command" : "workbench.action.quickOpenNavigateNextInViewPicker", "when" : "inQuickOpen && inViewsPicker"},
 {"key" : "ctrl+shift+tab", "command" : "workbench.action.quickOpenNavigatePreviousInEditorPicker", "when" : "inEditorsPicker && inQuickOpen"},
 {"key" : "ctrl+shift+e", "command" : "workbench.action.quickOpenNavigatePreviousInFilePicker", "when" : "inFilesPicker && inQuickOpen"},
 {"key" : "ctrl+shift+p", "command" : "workbench.action.quickOpenNavigatePreviousInFilePicker", "when" : "inFilesPicker && inQuickOpen"},
 {"key" : "ctrl+shift+r", "command" : "workbench.action.quickOpenNavigatePreviousInRecentFilesPicker", "when" : "inQuickOpen && inRecentFilesPicker"},
 {"key" : "ctrl+shift+q", "command" : "workbench.action.quickOpenNavigatePreviousInViewPicker", "when" : "inQuickOpen && inViewsPicker"},
 {"key" : "ctrl+r", "command" : "workbench.action.reloadWindow", "when" : "isDevelopment"},
 {"key" : "ctrl+shift+f", "command" : "workbench.action.terminal.searchWorkspace", "when" : "terminalFocus && terminalProcessSupported && terminalProcessSupported && terminalTextSelected"},
 {"key" : "ctrl+shift+i", "command" : "workbench.action.toggleDevTools", "when" : "isDevelopment"},
 {"key" : "escape", "command" : "notifications.hideToasts", "when" : "notificationFocus && notificationToastsVisible"},
 {"key" : "f10", "command" : "extension.node-debug.startWithStopOnEntry", "when" : "!inDebugMode && debugConfigurationType == 'node' || !inDebugMode && debugConfigurationType == 'pwa-extensionHost' || !inDebugMode && debugConfigurationType == 'pwa-node'"},
 {"key" : "ctrl+k ctrl+alt+s", "command" : "git.stageSelectedRanges", "when" : "isInDiffEditor"},
 {"key" : "ctrl+shift+v", "command" : "markdown.showPreview", "when" : "!notebookEditorFocused && editorLangId == 'markdown'"},
 {"key" : "shift+alt+f12", "command" : "references-view.findReferences", "when" : "editorHasReferenceProvider"},
 {"key" : "f11", "command" : "extension.node-debug.startWithStopOnEntry", "when" : "!inDebugMode && debugConfigurationType == 'node' || !inDebugMode && debugConfigurationType == 'pwa-extensionHost' || !inDebugMode && debugConfigurationType == 'pwa-node'"},
 {"key" : "ctrl+k ctrl+n", "command" : "git.unstageSelectedRanges", "when" : "isInDiffEditor"},
 {"key" : "ctrl+k v", "command" : "markdown.showPreviewToSide", "when" : "!notebookEditorFocused && editorLangId == 'markdown'"},
 {"key" : "f4", "command" : "references-view.next", "when" : "reference-list.hasResult && references-view.canNavigate"},
 {"key" : "ctrl+k ctrl+r", "command" : "git.revertSelectedRanges", "when" : "isInDiffEditor"},
 {"key" : "shift+f4", "command" : "references-view.prev", "when" : "reference-list.hasResult && references-view.canNavigate"},
 {"key" : "shift+alt+h", "command" : "references-view.showCallHierarchy", "when" : "editorHasCallHierarchyProvider"},
 {"key" : "alt+o", "command" : "C_Cpp.SwitchHeaderSource", "when" : "editorTextFocus && editorLangId == 'c' || editorTextFocus && editorLangId == 'cpp' || editorTextFocus && editorLangId == 'cuda-cpp'"},
 {"key" : "ctrl+alt+n", "command" : "code-runner.run"},
 {"key" : "escape", "command" : "extension.vim_escape", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "ctrl+k v", "command" : "markdown-preview-enhanced.openPreviewToTheSide", "when" : "editorLangId == 'markdown'"},
 {"key" : "ctrl+alt+k", "command" : "code-runner.runCustomCommand"},
 {"key" : "ctrl+shift+v", "command" : "markdown-preview-enhanced.openPreview", "when" : "editorLangId == 'markdown'"},
 {"key" : "escape", "command" : "notebook.cell.quitEdit", "when" : "inputFocus && notebookEditorFocused && vim.active && !editorHasSelection && !editorHoverVisible && vim.mode == 'Normal'"},
 {"key" : "ctrl+alt+j", "command" : "code-runner.runByLanguage"},
 {"key" : "home", "command" : "extension.vim_home", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+shift+enter", "command" : "markdown-preview-enhanced.runAllCodeChunks", "when" : "editorLangId == 'markdown'"},
 {"key" : "ctrl+alt+m", "command" : "code-runner.stop"},
 {"key" : "ctrl+home", "command" : "extension.vim_ctrl+home", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "shift+enter", "command" : "markdown-preview-enhanced.runCodeChunk", "when" : "editorLangId == 'markdown'"},
 {"key" : "end", "command" : "extension.vim_end", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+shift+s", "command" : "markdown-preview-enhanced.syncPreview", "when" : "editorLangId == 'markdown'"},
 {"key" : "ctrl+end", "command" : "extension.vim_ctrl+end", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "insert", "command" : "extension.vim_insert", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "backspace", "command" : "extension.vim_backspace", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "delete", "command" : "extension.vim_delete", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "tab", "command" : "extension.vim_tab", "when" : "editorFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "shift+tab", "command" : "extension.vim_shift+tab", "when" : "editorFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "left", "command" : "extension.vim_left", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "right", "command" : "extension.vim_right", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "up", "command" : "extension.vim_up", "when" : "editorTextFocus && vim.active && !inDebugRepl && !parameterHintsVisible && !suggestWidgetVisible"},
 {"key" : "down", "command" : "extension.vim_down", "when" : "editorTextFocus && vim.active && !inDebugRepl && !parameterHintsVisible && !suggestWidgetVisible"},
 {"key" : "g g", "command" : "list.focusFirst", "when" : "listFocus && !inputFocus"},
 {"key" : "h", "command" : "list.collapse", "when" : "listFocus && !inputFocus"},
 {"key" : "j", "command" : "list.focusDown", "when" : "listFocus && !inputFocus"},
 {"key" : "k", "command" : "list.focusUp", "when" : "listFocus && !inputFocus"},
 {"key" : "l", "command" : "list.select", "when" : "listFocus && !inputFocus"},
 {"key" : "o", "command" : "list.toggleExpand", "when" : "listFocus && !inputFocus"},
 {"key" : "oem_2", "command" : "list.toggleKeyboardNavigation", "when" : "listFocus && listSupportsKeyboardNavigation && !inputFocus"},
 {"key" : "ctrl+a", "command" : "extension.vim_ctrl+a", "when" : "editorTextFocus && vim.active && vim.use<C-a> && !inDebugRepl"},
 {"key" : "ctrl+b", "command" : "extension.vim_ctrl+b", "when" : "editorTextFocus && vim.active && vim.use<C-b> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+c", "command" : "extension.vim_ctrl+c", "when" : "editorTextFocus && vim.active && vim.overrideCtrlC && vim.use<C-c> && !inDebugRepl"},
 {"key" : "ctrl+d", "command" : "extension.vim_ctrl+d", "when" : "editorTextFocus && vim.active && vim.use<C-d> && !inDebugRepl"},
 {"key" : "ctrl+d", "command" : "list.focusPageDown", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+e", "command" : "extension.vim_ctrl+e", "when" : "editorTextFocus && vim.active && vim.use<C-e> && !inDebugRepl"},
 {"key" : "ctrl+f", "command" : "extension.vim_ctrl+f", "when" : "editorTextFocus && vim.active && vim.use<C-f> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+g", "command" : "extension.vim_ctrl+g", "when" : "editorTextFocus && vim.active && vim.use<C-g> && !inDebugRepl"},
 {"key" : "ctrl+h", "command" : "extension.vim_ctrl+h", "when" : "editorTextFocus && vim.active && vim.use<C-h> && !inDebugRepl"},
 {"key" : "ctrl+i", "command" : "extension.vim_ctrl+i", "when" : "editorTextFocus && vim.active && vim.use<C-i> && !inDebugRepl"},
 {"key" : "ctrl+j", "command" : "extension.vim_ctrl+j", "when" : "editorTextFocus && vim.active && vim.use<C-j> && !inDebugRepl"},
 {"key" : "ctrl+k", "command" : "extension.vim_ctrl+k", "when" : "editorTextFocus && vim.active && vim.use<C-k> && !inDebugRepl"},
 {"key" : "ctrl+l", "command" : "extension.vim_navigateCtrlL", "when" : "editorTextFocus && vim.active && vim.use<C-l> && !inDebugRepl"},
 {"key" : "ctrl+m", "command" : "extension.vim_ctrl+m", "when" : "editorTextFocus && vim.active && vim.use<C-m> && !inDebugRepl || vim.active && vim.use<C-m> && !inDebugRepl && vim.mode == 'CommandlineInProgress' || vim.active && vim.use<C-m> && !inDebugRepl && vim.mode == 'SearchInProgressMode'"},
 {"key" : "ctrl+n", "command" : "extension.vim_ctrl+n", "when" : "editorTextFocus && vim.active && vim.use<C-n> && !inDebugRepl || vim.active && vim.use<C-n> && !inDebugRepl && vim.mode == 'CommandlineInProgress' || vim.active && vim.use<C-n> && !inDebugRepl && vim.mode == 'SearchInProgressMode'"},
 {"key" : "ctrl+o", "command" : "extension.vim_ctrl+o", "when" : "editorTextFocus && vim.active && vim.use<C-o> && !inDebugRepl"},
 {"key" : "ctrl+p", "command" : "extension.vim_ctrl+p", "when" : "suggestWidgetVisible && vim.active && vim.use<C-p> && !inDebugRepl || vim.active && vim.use<C-p> && !inDebugRepl && vim.mode == 'CommandlineInProgress' || vim.active && vim.use<C-p> && !inDebugRepl && vim.mode == 'SearchInProgressMode'"},
 {"key" : "ctrl+q", "command" : "extension.vim_winCtrlQ", "when" : "editorTextFocus && vim.active && vim.use<C-q> && !inDebugRepl"},
 {"key" : "ctrl+r", "command" : "extension.vim_ctrl+r", "when" : "editorTextFocus && vim.active && vim.use<C-r> && !inDebugRepl"},
 {"key" : "ctrl+t", "command" : "extension.vim_ctrl+t", "when" : "editorTextFocus && vim.active && vim.use<C-t> && !inDebugRepl"},
 {"key" : "ctrl+u", "command" : "extension.vim_ctrl+u", "when" : "editorTextFocus && vim.active && vim.use<C-u> && !inDebugRepl"},
 {"key" : "ctrl+u", "command" : "list.focusPageUp", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+v", "command" : "extension.vim_ctrl+v", "when" : "editorTextFocus && vim.active && vim.use<C-v> && !inDebugRepl"},
 {"key" : "ctrl+w", "command" : "extension.vim_ctrl+w", "when" : "editorTextFocus && vim.active && vim.use<C-w> && !inDebugRepl"},
 {"key" : "ctrl+x", "command" : "extension.vim_ctrl+x", "when" : "editorTextFocus && vim.active && vim.use<C-x> && !inDebugRepl"},
 {"key" : "ctrl+y", "command" : "extension.vim_ctrl+y", "when" : "editorTextFocus && vim.active && vim.use<C-y> && !inDebugRepl"},
 {"key" : "ctrl+6", "command" : "extension.vim_ctrl+6", "when" : "editorTextFocus && vim.active && vim.use<C-6> && !inDebugRepl"},
 {"key" : "ctrl+unknown", "command" : "extension.vim_ctrl+^", "when" : "editorTextFocus && vim.active && vim.use<C-^> && !inDebugRepl"},
 {"key" : "ctrl+oem_4", "command" : "extension.vim_ctrl+[", "when" : "editorTextFocus && vim.active && vim.use<C-[> && !inDebugRepl"},
 {"key" : "ctrl+oem_6", "command" : "extension.vim_ctrl+]", "when" : "editorTextFocus && vim.active && vim.use<C-]> && !inDebugRepl"},
 {"key" : "ctrl+shift+2", "command" : "extension.vim_ctrl+shift+2", "when" : "editorTextFocus && vim.active && vim.use<C-shift+2>"},
 {"key" : "ctrl+up", "command" : "extension.vim_ctrl+up", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+down", "command" : "extension.vim_ctrl+down", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+left", "command" : "extension.vim_ctrl+left", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+right", "command" : "extension.vim_ctrl+right", "when" : "editorTextFocus && vim.active && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "ctrl+pagedown", "command" : "extension.vim_ctrl+pagedown", "when" : "editorTextFocus && vim.active && vim.use<C-pagedown> && !inDebugRepl"},
 {"key" : "ctrl+pageup", "command" : "extension.vim_ctrl+pageup", "when" : "editorTextFocus && vim.active && vim.use<C-pageup> && !inDebugRepl"},
 {"key" : "ctrl+space", "command" : "extension.vim_ctrl+space", "when" : "editorTextFocus && vim.active && vim.use<C-space> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "shift+g", "command" : "list.focusLast", "when" : "listFocus && !inputFocus"},
 {"key" : "ctrl+backspace", "command" : "extension.vim_ctrl+backspace", "when" : "editorTextFocus && vim.active && vim.use<C-BS> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "shift+backspace", "command" : "extension.vim_shift+backspace", "when" : "editorTextFocus && vim.active && vim.use<S-BS> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "win+left", "command" : "extension.vim_cmd+left", "when" : "editorTextFocus && vim.active && vim.use<D-left> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "win+right", "command" : "extension.vim_cmd+right", "when" : "editorTextFocus && vim.active && vim.use<D-right> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "win+a", "command" : "extension.vim_cmd+a", "when" : "editorTextFocus && vim.active && vim.use<D-a> && !inDebugRepl && vim.mode != 'Insert'"},
 {"key" : "win+c", "command" : "extension.vim_cmd+c", "when" : "editorTextFocus && vim.active && vim.overrideCopy && vim.use<D-c> && !inDebugRepl"},
 {"key" : "win+d", "command" : "extension.vim_cmd+d", "when" : "editorTextFocus && vim.active && vim.use<D-d> && !inDebugRepl"},
 {"key" : "win+v", "command" : "extension.vim_cmd+v", "when" : "editorTextFocus && vim.active && vim.use<D-v> && vim.mode == ''CommandlineInProgress' !inDebugRepl' || editorTextFocus && vim.active && vim.use<D-v> && !inDebugRepl && vim.mode == 'SearchInProgressMode'"},
 {"key" : "ctrl+alt+down", "command" : "extension.vim_cmd+alt+down", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "ctrl+alt+up", "command" : "extension.vim_cmd+alt+up", "when" : "editorTextFocus && vim.active && !inDebugRepl"},
 {"key" : "j", "command" : "notebook.focusNextEditor", "when" : "editorTextFocus && inputFocus && notebookEditorFocused && vim.mode == 'Normal' && notebookEditorCursorAtBoundary != 'none' && notebookEditorCursorAtBoundary != 'top'"},
 {"key" : "k", "command" : "notebook.focusPreviousEditor", "when" : "editorTextFocus && inputFocus && notebookEditorFocused && vim.mode == 'Normal' && notebookEditorCursorAtBoundary != 'bottom' && notebookEditorCursorAtBoundary != 'none'"}]

    // 以下是其他可用命令:
    // - C_Cpp.AddToIncludePath
    // - C_Cpp.BuildAndDebugActiveFile
    // - C_Cpp.CheckForCompiler
    // - C_Cpp.ConfigurationEdit
    // - C_Cpp.ConfigurationEditJSON
    // - C_Cpp.ConfigurationEditUI
    // - C_Cpp.ConfigurationProviderSelect
    // - C_Cpp.ConfigurationSelect
    // - C_Cpp.DisableErrorSquiggles
    // - C_Cpp.EnableErrorSquiggles
    // - C_Cpp.GenerateEditorConfig
    // - C_Cpp.GoToNextDirectiveInGroup
    // - C_Cpp.GoToPrevDirectiveInGroup
    // - C_Cpp.LogDiagnostics
    // - C_Cpp.PauseParsing
    // - C_Cpp.RescanWorkspace
    // - C_Cpp.ResetDatabase
    // - C_Cpp.ResumeParsing
    // - C_Cpp.ShowParsingCommands
    // - C_Cpp.ShowReferenceItem
    // - C_Cpp.ShowReferencesProgress
    // - C_Cpp.TakeSurvey
    // - C_Cpp.ToggleDimInactiveRegions
    // - C_Cpp.ToggleIncludeFallback
    // - C_Cpp.VcpkgClipboardInstallSuggested
    // - C_Cpp.VcpkgOnlineHelpSuggested
    // - C_Cpp.referencesViewGroupByType
    // - C_Cpp.referencesViewUngroupByType
    // - CppReferencesView.focus
    // - CppReferencesView.resetViewLocation
    // - HookyQR.beautify
    // - HookyQR.beautifyFile
    // - acceptSelectedSuggestionOnEnter
    // - acceptSnippet
    // - actions.findWithSelection
    // - addRootFolder
    // - algorithm.addFolder
    // - algorithm.addMemoFile
    // - algorithm.buildCode
    // - algorithm.copyCode
    // - algorithm.debugCode
    // - algorithm.getDescription
    // - algorithm.memoFilePreview
    // - algorithm.newAnswer
    // - algorithm.questionPreview
    // - algorithm.refreshQuestions
    // - algorithm.removeMemoFile
    // - algorithm.search
    // - algorithm.signIn
    // - algorithm.submit
    // - algorithm.switchCodeLang
    // - algorithm.switchDataBase
    // - algorithm.switchEndpoint
    // - algorithm.testCode
    // - algorithm.viewSubmitHistory
    // - bracket-pair-colorizer.expandBracketSelection
    // - bracket-pair-colorizer.undoBracketSelection
    // - breadcrumbs.toggle
    // - callStack.collapse
    // - changeEditorIndentation
    // - cleanSearchEditorState
    // - closeReferenceSearchEditor
    // - codelens.showLensesInCurrentLine
    // - columnSelect
    // - comments.collapse
    // - compareFiles
    // - compareSelected
    // - compositionEnd
    // - compositionStart
    // - compositionType
    // - configureExtensionsAutoUpdate.all
    // - configureExtensionsAutoUpdate.enabled
    // - configureExtensionsAutoUpdate.none
    // - cpptools.activeConfigCustomVariable
    // - cpptools.activeConfigName
    // - cpptools.setActiveConfigName
    // - createCursor
    // - cursorLineEnd
    // - cursorLineEndSelect
    // - cursorLineStart
    // - cursorLineStartSelect
    // - cursorRedo
    // - cursorWordAccessibilityLeft
    // - cursorWordAccessibilityLeftSelect
    // - cursorWordAccessibilityRight
    // - cursorWordAccessibilityRightSelect
    // - cursorWordEndLeft
    // - cursorWordEndLeftSelect
    // - cursorWordPartLeft
    // - cursorWordPartLeftSelect
    // - cursorWordPartRight
    // - cursorWordPartRightSelect
    // - cursorWordPartStartLeft
    // - cursorWordPartStartLeftSelect
    // - cursorWordRight
    // - cursorWordRightSelect
    // - cursorWordStartLeft
    // - cursorWordStartLeftSelect
    // - cursorWordStartRight
    // - cursorWordStartRightSelect
    // - cut
    // - debug-leetcode.debugSolution
    // - debug.addConfiguration
    // - debug.addToWatchExpressions
    // - debug.breakWhenValueChanges
    // - debug.breakWhenValueIsAccessed
    // - debug.breakWhenValueIsRead
    // - debug.collapseRepl
    // - debug.copyEvaluatePath
    // - debug.copyStackTrace
    // - debug.editBreakpoint
    // - debug.editFunctionBreakpoint
    // - debug.editFunctionBreakpointHitCount
    // - debug.enableOrDisableBreakpoint
    // - debug.installAdditionalDebuggers
    // - debug.jumpToCursor
    // - debug.replCopy
    // - debug.replPaste
    // - debug.startFromConfig
    // - debug.toggleReplIgnoreFocus
    // - default:compositionEnd
    // - default:compositionStart
    // - default:compositionType
    // - default:cut
    // - default:paste
    // - default:redo
    // - default:replacePreviousChar
    // - default:type
    // - default:undo
    // - deleteAllLeft
    // - deleteAllRight
    // - deleteInsideWord
    // - deleteWordEndLeft
    // - deleteWordEndRight
    // - deleteWordPartLeft
    // - deleteWordPartRight
    // - deleteWordStartLeft
    // - deleteWordStartRight
    // - editor.action.addCursorsToBottom
    // - editor.action.addCursorsToTop
    // - editor.action.addSelectionToPreviousFindMatch
    // - editor.action.clipboardCopyWithSyntaxHighlightingAction
    // - editor.action.detectIndentation
    // - editor.action.duplicateSelection
    // - editor.action.findReferences
    // - editor.action.fixAll
    // - editor.action.fontZoomIn
    // - editor.action.fontZoomOut
    // - editor.action.fontZoomReset
    // - editor.action.forceRetokenize
    // - editor.action.format
    // - editor.action.formatChanges
    // - editor.action.formatDocument.multiple
    // - editor.action.formatSelection.multiple
    // - editor.action.goToDeclaration
    // - editor.action.goToSelectionAnchor
    // - editor.action.goToTypeDefinition
    // - editor.action.indentUsingSpaces
    // - editor.action.indentUsingTabs
    // - editor.action.indentationToSpaces
    // - editor.action.indentationToTabs
    // - editor.action.inlineSuggest.trigger
    // - editor.action.insertSnippet
    // - editor.action.inspectTMScopes
    // - editor.action.joinLines
    // - editor.action.measureExtHostLatency
    // - editor.action.moveCarretLeftAction
    // - editor.action.moveCarretRightAction
    // - editor.action.moveSelectionToPreviousFindMatch
    // - editor.action.nextCommentThreadAction
    // - editor.action.openDeclarationToTheSide
    // - editor.action.openLink
    // - editor.action.peekDeclaration
    // - editor.action.peekTypeDefinition
    // - editor.action.previewDeclaration
    // - editor.action.referenceSearch.trigger
    // - editor.action.reindentlines
    // - editor.action.reindentselectedlines
    // - editor.action.resetSuggestSize
    // - editor.action.revealDeclaration
    // - editor.action.selectToBracket
    // - editor.action.showDefinitionPreviewHover
    // - editor.action.showReferences
    // - editor.action.showSnippets
    // - editor.action.smartSelect.grow
    // - editor.action.sortLinesAscending
    // - editor.action.sortLinesDescending
    // - editor.action.sourceAction
    // - editor.action.startDebugTextMate
    // - editor.action.toggleColumnSelection
    // - editor.action.toggleMinimap
    // - editor.action.toggleRenderControlCharacter
    // - editor.action.toggleRenderWhitespace
    // - editor.action.transformToLowercase
    // - editor.action.transformToSnakecase
    // - editor.action.transformToTitlecase
    // - editor.action.transformToUppercase
    // - editor.action.transpose
    // - editor.action.transposeLetters
    // - editor.action.wordHighlight.trigger
    // - editor.debug.action.addLogPoint
    // - editor.debug.action.conditionalBreakpoint
    // - editor.debug.action.goToNextBreakpoint
    // - editor.debug.action.goToPreviousBreakpoint
    // - editor.debug.action.openDisassemblyView
    // - editor.debug.action.runToCursor
    // - editor.debug.action.selectionToRepl
    // - editor.debug.action.selectionToWatch
    // - editor.debug.action.stepIntoTargets
    // - editor.emmet.action.balanceIn
    // - editor.emmet.action.balanceOut
    // - editor.emmet.action.decrementNumberByOne
    // - editor.emmet.action.decrementNumberByOneTenth
    // - editor.emmet.action.decrementNumberByTen
    // - editor.emmet.action.evaluateMathExpression
    // - editor.emmet.action.incrementNumberByOne
    // - editor.emmet.action.incrementNumberByOneTenth
    // - editor.emmet.action.incrementNumberByTen
    // - editor.emmet.action.matchTag
    // - editor.emmet.action.mergeLines
    // - editor.emmet.action.nextEditPoint
    // - editor.emmet.action.prevEditPoint
    // - editor.emmet.action.reflectCSSValue
    // - editor.emmet.action.removeTag
    // - editor.emmet.action.selectNextItem
    // - editor.emmet.action.selectPrevItem
    // - editor.emmet.action.splitJoinTag
    // - editor.emmet.action.toggleComment
    // - editor.emmet.action.updateImageSize
    // - editor.emmet.action.updateTag
    // - editor.emmet.action.wrapWithAbbreviation
    // - editor.gotoNextFold
    // - editor.gotoParentFold
    // - editor.gotoPreviousFold
    // - emmet.expandAbbreviation
    // - explorer.download
    // - explorer.newFile
    // - explorer.newFolder
    // - explorer.openWith
    // - explorer.upload
    // - extension.bisect.next
    // - extension.bisect.start
    // - extension.bisect.stop
    // - extension.chrome-debug.toggleSkippingFile
    // - extension.chrome-debug.toggleSmartStep
    // - extension.js-debug.addCustomBreakpoints
    // - extension.js-debug.autoAttachToProcess
    // - extension.js-debug.clearAutoAttachVariables
    // - extension.js-debug.createDebuggerTerminal
    // - extension.js-debug.createDiagnostics
    // - extension.js-debug.debugLink
    // - extension.js-debug.npmScript
    // - extension.js-debug.openEdgeDevTools
    // - extension.js-debug.pickNodeProcess
    // - extension.js-debug.prettyPrint
    // - extension.js-debug.removeAllCustomBreakpoints
    // - extension.js-debug.removeCustomBreakpoint
    // - extension.js-debug.requestCDPProxy
    // - extension.js-debug.revealPage
    // - extension.js-debug.setAutoAttachVariables
    // - extension.js-debug.startProfile
    // - extension.js-debug.stopProfile
    // - extension.js-debug.toggleSkippingFile
    // - extension.jsProfileVisualizer.table.clearCodeLenses
    // - extension.multiCommand.execute
    // - extension.node-debug.attachNodeProcess
    // - extension.node-debug.toggleAutoAttach
    // - extension.node-debug.toggleSkippingFile
    // - extension.node-debug2.toggleSkippingFile
    // - extension.open
    // - extension.pickNativeProcess
    // - extension.pickRemoteNativeProcess
    // - extension.pwa-node-debug.attachNodeProcess
    // - extensions.actions.searchByCategory.Azure
    // - extensions.actions.searchByCategory.Data Science
    // - extensions.actions.searchByCategory.Debuggers
    // - extensions.actions.searchByCategory.Education
    // - extensions.actions.searchByCategory.Extension Packs
    // - extensions.actions.searchByCategory.Formatters
    // - extensions.actions.searchByCategory.Keymaps
    // - extensions.actions.searchByCategory.Language Packs
    // - extensions.actions.searchByCategory.Linters
    // - extensions.actions.searchByCategory.Machine Learning
    // - extensions.actions.searchByCategory.Notebooks
    // - extensions.actions.searchByCategory.Other
    // - extensions.actions.searchByCategory.Programming Languages
    // - extensions.actions.searchByCategory.SCM Providers
    // - extensions.actions.searchByCategory.Snippets
    // - extensions.actions.searchByCategory.Testing
    // - extensions.actions.searchByCategory.Themes
    // - extensions.actions.searchByCategory.Visualization
    // - extensions.filter.featured
    // - extensions.recommendedList.focus
    // - extensions.recommendedList.resetViewLocation
    // - extensions.sort.installs
    // - extensions.sort.name
    // - extensions.sort.publishedDate
    // - extensions.sort.rating
    // - files.openTimeline
    // - files.participants.resetChoice
    // - filesExplorer.findInWorkspace
    // - getContextKeyInfo
    // - git._syncAll
    // - git.addRemote
    // - git.api.getRemoteSources
    // - git.api.getRepositories
    // - git.api.getRepositoryState
    // - git.branch
    // - git.branchFrom
    // - git.checkout
    // - git.checkoutDetached
    // - git.cherryPick
    // - git.clean
    // - git.cleanAll
    // - git.cleanAllTracked
    // - git.cleanAllUntracked
    // - git.clone
    // - git.cloneRecursive
    // - git.close
    // - git.commit
    // - git.commitAll
    // - git.commitAllAmend
    // - git.commitAllAmendNoVerify
    // - git.commitAllNoVerify
    // - git.commitAllSigned
    // - git.commitAllSignedNoVerify
    // - git.commitEmpty
    // - git.commitEmptyNoVerify
    // - git.commitNoVerify
    // - git.commitStaged
    // - git.commitStagedAmend
    // - git.commitStagedAmendNoVerify
    // - git.commitStagedNoVerify
    // - git.commitStagedSigned
    // - git.commitStagedSignedNoVerify
    // - git.createTag
    // - git.deleteBranch
    // - git.deleteTag
    // - git.fetch
    // - git.fetchAll
    // - git.fetchPrune
    // - git.ignore
    // - git.init
    // - git.merge
    // - git.openAllChanges
    // - git.openChange
    // - git.openFile
    // - git.openFile2
    // - git.openHEADFile
    // - git.openRepository
    // - git.openResource
    // - git.publish
    // - git.pull
    // - git.pullFrom
    // - git.pullRebase
    // - git.push
    // - git.pushForce
    // - git.pushTags
    // - git.pushTo
    // - git.pushToForce
    // - git.pushWithTags
    // - git.pushWithTagsForce
    // - git.rebase
    // - git.rebaseAbort
    // - git.refresh
    // - git.removeRemote
    // - git.rename
    // - git.renameBranch
    // - git.restoreCommitTemplate
    // - git.revealInExplorer
    // - git.revertChange
    // - git.setLogLevel
    // - git.showOutput
    // - git.stage
    // - git.stageAll
    // - git.stageAllMerge
    // - git.stageAllTracked
    // - git.stageAllUntracked
    // - git.stageChange
    // - git.stash
    // - git.stashApply
    // - git.stashApplyLatest
    // - git.stashDrop
    // - git.stashIncludeUntracked
    // - git.stashPop
    // - git.stashPopLatest
    // - git.sync
    // - git.syncRebase
    // - git.timeline.compareWithSelected
    // - git.timeline.copyCommitId
    // - git.timeline.copyCommitMessage
    // - git.timeline.openDiff
    // - git.timeline.selectForCompare
    // - git.undoCommit
    // - git.unstage
    // - git.unstageAll
    // - github-enterprise.provide-token
    // - github.provide-token
    // - github.publish
    // - goToNextReferenceFromEmbeddedEditor
    // - goToPreviousReferenceFromEmbeddedEditor
    // - help.tweetFeedback
    // - imagePreview.zoomIn
    // - imagePreview.zoomOut
    // - javascript.goToProjectConfig
    // - javascript.reloadProjects
    // - jsBrowserBreakpoints.focus
    // - jsBrowserBreakpoints.resetViewLocation
    // - keybindings.editor.copyCommandKeybindingEntry
    // - keybindings.editor.resetKeybinding
    // - keybindings.editor.showConflicts
    // - keybindings.editor.showDefaultKeybindings
    // - keybindings.editor.showExtensionKeybindings
    // - keybindings.editor.showUserKeybindings
    // - lastCursorLineSelect
    // - lastCursorLineSelectDrag
    // - lastCursorWordSelect
    // - layoutEditorGroups
    // - leetCodeExplorer.focus
    // - leetCodeExplorer.removeView
    // - leetCodeExplorer.resetViewLocation
    // - leetCodeExplorer.toggleVisibility
    // - leetcode.addFavorite
    // - leetcode.deleteCache
    // - leetcode.manageSessions
    // - leetcode.pickOne
    // - leetcode.previewProblem
    // - leetcode.refreshExplorer
    // - leetcode.removeFavorite
    // - leetcode.searchProblem
    // - leetcode.showProblem
    // - leetcode.showSolution
    // - leetcode.signin
    // - leetcode.signout
    // - leetcode.submitSolution
    // - leetcode.switchDefaultLanguage
    // - leetcode.testSolution
    // - leetcode.toggleLeetCodeCn
    // - lineBreakInsert
    // - list.focusParent
    // - list.scrollLeft
    // - list.scrollRight
    // - list.selectAndPreserveFocus
    // - list.toggleFilterOnType
    // - markdown-preview-enhanced.createTOC
    // - markdown-preview-enhanced.customizeCss
    // - markdown-preview-enhanced.extendParser
    // - markdown-preview-enhanced.insertNewSlide
    // - markdown-preview-enhanced.insertPagebreak
    // - markdown-preview-enhanced.insertTable
    // - markdown-preview-enhanced.openImageHelper
    // - markdown-preview-enhanced.openKaTeXConfig
    // - markdown-preview-enhanced.openMathJaxConfig
    // - markdown-preview-enhanced.openMermaidConfig
    // - markdown-preview-enhanced.showUploadedImages
    // - markdown-preview-enhanced.toggleBreakOnSingleNewLine
    // - markdown-preview-enhanced.toggleLiveUpdate
    // - markdown-preview-enhanced.toggleScrollSync
    // - markdown.preview.refresh
    // - markdown.preview.toggleLock
    // - markdown.showLockedPreviewToSide
    // - markdown.showPreviewSecuritySelector
    // - markdown.showSource
    // - memo.focus
    // - memo.removeView
    // - memo.resetViewLocation
    // - memo.toggleVisibility
    // - merge-conflict.accept.all-both
    // - merge-conflict.accept.all-current
    // - merge-conflict.accept.all-incoming
    // - merge-conflict.accept.both
    // - merge-conflict.accept.current
    // - merge-conflict.accept.incoming
    // - merge-conflict.accept.selection
    // - merge-conflict.compare
    // - merge-conflict.next
    // - merge-conflict.previous
    // - noop
    // - notebook.cancelExecution
    // - notebook.cell.cancelExecution
    // - notebook.cell.changeLanguage
    // - notebook.cell.copy
    // - notebook.cell.cut
    // - notebook.cell.executeCellAndBelow
    // - notebook.cell.executeCellsAbove
    // - notebook.cell.insertCodeCellAtTop
    // - notebook.cell.insertMarkdownCellAbove
    // - notebook.cell.insertMarkdownCellAtTop
    // - notebook.cell.insertMarkdownCellBelow
    // - notebook.cell.paste
    // - notebook.cell.toggleLineNumbers
    // - notebook.clearAllCellsOutputs
    // - notebook.diff.cell.revertInput
    // - notebook.diff.cell.revertMetadata
    // - notebook.diff.cell.revertOutputs
    // - notebook.diff.cell.switchOutputRenderingStyleToText
    // - notebook.diff.showMetadata
    // - notebook.diff.showOutputs
    // - notebook.diff.switchToText
    // - notebook.execute
    // - notebook.inspectLayout
    // - notebook.renderAllMarkdownCells
    // - notebook.selectKernel
    // - notebook.setProfile
    // - notebook.toggleCellToolbarPosition
    // - notebook.toggleLayoutTroubleshoot
    // - notebook.toggleLineNumbers
    // - notifications.clearAll
    // - notifications.focusToasts
    // - notifications.showList
    // - notifications.toggleList
    // - npm.debugScript
    // - npm.focus
    // - npm.openScript
    // - npm.packageManager
    // - npm.refresh
    // - npm.resetViewLocation
    // - npm.runInstall
    // - npm.runScript
    // - npm.runScriptFromFolder
    // - npm.runSelectedScript
    // - openEditors.closeAll
    // - openEditors.newUntitledFile
    // - openInTerminal
    // - openReference
    // - outline.collapse
    // - outline.filterOnType
    // - outline.focus
    // - outline.followCursor
    // - outline.removeView
    // - outline.resetViewLocation
    // - outline.sortByKind
    // - outline.sortByName
    // - outline.sortByPosition
    // - outline.toggleVisibility
    // - paste
    // - perfview.show
    // - prettier.createConfigFile
    // - prettier.forceFormatDocument
    // - prettier.openOutput
    // - problems.action.clearFilterText
    // - problems.action.copyMessage
    // - problems.action.copyRelatedInformationMessage
    // - problems.action.showMultilineMessage
    // - problems.action.showSinglelineMessage
    // - questions.focus
    // - questions.removeView
    // - questions.resetViewLocation
    // - questions.toggleVisibility
    // - rainbow-fart.enable
    // - refactorPreview
    // - refactorPreview.discard
    // - refactorPreview.focus
    // - refactorPreview.groupByFile
    // - refactorPreview.groupByType
    // - refactorPreview.resetViewContainerLocation
    // - refactorPreview.resetViewLocation
    // - refactorPreview.toggleGrouping
    // - references-view.clear
    // - references-view.clearHistory
    // - references-view.copy
    // - references-view.copyAll
    // - references-view.copyPath
    // - references-view.findImplementations
    // - references-view.pickFromHistory
    // - references-view.refind
    // - references-view.refresh
    // - references-view.removeCallItem
    // - references-view.removeReferenceItem
    // - references-view.showIncomingCalls
    // - references-view.showOutgoingCalls
    // - references-view.tree.focus
    // - references-view.tree.resetViewLocation
    // - remote-wsl-recommender.gettingStarted
    // - remote-wsl-recommender.openWSLFolder
    // - remote.explorer.switch
    // - remote.tunnel.changeLocalPort
    // - remote.tunnel.closeCommandPalette
    // - remote.tunnel.copyAddressCommandPalette
    // - remote.tunnel.forwardCommandPalette
    // - remote.tunnel.forwardInline
    // - remote.tunnel.makePrivate
    // - remote.tunnel.makePublic
    // - remote.tunnel.open
    // - remote.tunnel.openCommandPalette
    // - remote.tunnel.openPreview
    // - remote.tunnel.setProtocolHttp
    // - remote.tunnel.setProtocolHttps
    // - removeRootFolder
    // - repl.action.copyAll
    // - replacePreviousChar
    // - resetGettingStartedProgress
    // - revealInExplorer
    // - scm.openInTerminal
    // - search.action.clearHistory
    // - search.action.clearSearchResults
    // - search.action.collapseSearchResults
    // - search.action.copyAll
    // - search.action.expandSearchResults
    // - search.action.focusSearchList
    // - search.action.openEditor
    // - search.action.openNewEditor
    // - search.action.openNewEditorFromView
    // - search.action.openNewEditorToSide
    // - search.action.refreshSearchResults
    // - search.action.revealInSideBar
    // - selectFirstSuggestion
    // - selectForCompare
    // - selectLastSuggestion
    // - setContext
    // - setSelection
    // - settings.filterByModified
    // - settings.filterByOnline
    // - settings.filterByTelemetry
    // - settings.filterUntrusted
    // - settings.switchToJSON
    // - showEditorScreenReaderNotification
    // - simpleBrowser.show
    // - terminal.focus
    // - terminal.removeView
    // - terminal.resetViewContainerLocation
    // - terminal.resetViewLocation
    // - terminal.toggleVisibility
    // - testing.clearTestResults
    // - testing.collapseAll
    // - testing.configureProfile
    // - testing.debug
    // - testing.debugSelected
    // - testing.hideTest
    // - testing.run
    // - testing.runSelected
    // - testing.runUsing
    // - testing.searchForTestExtension
    // - testing.selectDefaultTestProfiles
    // - testing.sortByLocation
    // - testing.sortByStatus
    // - testing.unhideTest
    // - testing.viewAsList
    // - testing.viewAsTree
    // - timeline.focus
    // - timeline.removeView
    // - timeline.resetViewLocation
    // - timeline.toggleVisibility
    // - toggle.diff.ignoreTrimWhitespace
    // - toggle.diff.renderSideBySide
    // - toggleEscapeSequenceLogging
    // - toggleVim
    // - type
    // - typescript.findAllFileReferences
    // - typescript.goToProjectConfig
    // - typescript.openTsServerLog
    // - typescript.reloadProjects
    // - typescript.restartTsServer
    // - typescript.selectTypeScriptVersion
    // - update.check
    // - update.checkForVSCodeUpdate
    // - update.checking
    // - update.downloadNow
    // - update.downloading
    // - update.install
    // - update.restart
    // - update.showCurrentReleaseNotes
    // - update.updating
    // - variables.collapse
    // - vim.editVimrc
    // - vim.remap
    // - vim.showQuickpickCmdLine
    // - walkthroughs.selectStep
    // - watch.collapse
    // - welcome.markStepComplete
    // - welcome.markStepIncomplete
    // - welcome.showAllWalkthroughs
    // - workbench.action.acceptSelectedQuickOpenItem
    // - workbench.action.addComment
    // - workbench.action.addRootFolder
    // - workbench.action.alternativeAcceptSelectedQuickOpenItem
    // - workbench.action.blur
    // - workbench.action.clearCommandHistory
    // - workbench.action.clearEditorHistory
    // - workbench.action.clearRecentFiles
    // - workbench.action.closeActivePinnedEditor
    // - workbench.action.closeEditorInAllGroups
    // - workbench.action.closeEditorsAndGroup
    // - workbench.action.closeEditorsInOtherGroups
    // - workbench.action.closeEditorsToTheLeft
    // - workbench.action.closeEditorsToTheRight
    // - workbench.action.closeOtherEditors
    // - workbench.action.closePanel
    // - workbench.action.closeSidebar
    // - workbench.action.compareEditor.focusOtherSide
    // - workbench.action.compareEditor.focusPrimarySide
    // - workbench.action.compareEditor.focusSecondarySide
    // - workbench.action.configureLanguageBasedSettings
    // - workbench.action.configureLocale
    // - workbench.action.configureRuntimeArguments
    // - workbench.action.createTerminalEditor
    // - workbench.action.createTerminalEditorSide
    // - workbench.action.debug.configure
    // - workbench.action.debug.focusProcess
    // - workbench.action.debug.restartFrame
    // - workbench.action.debug.reverseContinue
    // - workbench.action.debug.selectRepl
    // - workbench.action.debug.selectandstart
    // - workbench.action.debug.stepBack
    // - workbench.action.debug.terminateThread
    // - workbench.action.decreaseViewHeight
    // - workbench.action.decreaseViewSize
    // - workbench.action.decreaseViewWidth
    // - workbench.action.duplicateActiveEditorGroupDown
    // - workbench.action.duplicateActiveEditorGroupLeft
    // - workbench.action.duplicateActiveEditorGroupRight
    // - workbench.action.duplicateActiveEditorGroupUp
    // - workbench.action.duplicateWorkspaceInNewWindow
    // - workbench.action.editor.changeEOL
    // - workbench.action.editor.changeEncoding
    // - workbench.action.editorLayoutSingle
    // - workbench.action.editorLayoutThreeColumns
    // - workbench.action.editorLayoutThreeRows
    // - workbench.action.editorLayoutTwoByTwoGrid
    // - workbench.action.editorLayoutTwoColumns
    // - workbench.action.editorLayoutTwoColumnsBottom
    // - workbench.action.editorLayoutTwoRows
    // - workbench.action.editorLayoutTwoRowsRight
    // - workbench.action.evenEditorWidths
    // - workbench.action.extensionHostProfiler.stop
    // - workbench.action.files.openFileFolderInNewWindow
    // - workbench.action.files.openFileInNewWindow
    // - workbench.action.files.openFolderInNewWindow
    // - workbench.action.files.revert
    // - workbench.action.files.saveAll
    // - workbench.action.files.saveFiles
    // - workbench.action.firstEditorInGroup
    // - workbench.action.focusAboveGroupWithoutWrap
    // - workbench.action.focusActiveEditorGroup
    // - workbench.action.focusActivityBar
    // - workbench.action.focusBanner
    // - workbench.action.focusBelowGroupWithoutWrap
    // - workbench.action.focusCommentsPanel
    // - workbench.action.focusLastEditorGroup
    // - workbench.action.focusLeftGroupWithoutWrap
    // - workbench.action.focusNextGroup
    // - workbench.action.focusPanel
    // - workbench.action.focusPreviousGroup
    // - workbench.action.focusQuickOpen
    // - workbench.action.focusRightGroupWithoutWrap
    // - workbench.action.focusStatusBar
    // - workbench.action.generateColorTheme
    // - workbench.action.increaseViewHeight
    // - workbench.action.increaseViewSize
    // - workbench.action.increaseViewWidth
    // - workbench.action.inspectContextKeys
    // - workbench.action.inspectKeyMappings
    // - workbench.action.inspectKeyMappingsJSON
    // - workbench.action.joinAllGroups
    // - workbench.action.joinTwoGroups
    // - workbench.action.logStorage
    // - workbench.action.logWorkingCopies
    // - workbench.action.manageTrustedDomain
    // - workbench.action.maximizeEditor
    // - workbench.action.minimizeOtherEditors
    // - workbench.action.moveEditorToAboveGroup
    // - workbench.action.moveEditorToBelowGroup
    // - workbench.action.moveEditorToLeftGroup
    // - workbench.action.moveEditorToRightGroup
    // - workbench.action.moveFocusedView
    // - workbench.action.moveView
    // - workbench.action.navigateDown
    // - workbench.action.navigateEditorGroups
    // - workbench.action.navigateLast
    // - workbench.action.navigateLeft
    // - workbench.action.navigateRight
    // - workbench.action.navigateUp
    // - workbench.action.newGroupAbove
    // - workbench.action.newGroupBelow
    // - workbench.action.newGroupLeft
    // - workbench.action.newGroupRight
    // - workbench.action.nextPanelView
    // - workbench.action.nextSideBarView
    // - workbench.action.openActiveLogOutputFile
    // - workbench.action.openDefaultKeybindingsFile
    // - workbench.action.openDocumentationUrl
    // - workbench.action.openEditorAtIndex
    // - workbench.action.openExtensionLogsFolder
    // - workbench.action.openFolderSettings
    // - workbench.action.openFolderSettingsFile
    // - workbench.action.openGlobalKeybindingsFile
    // - workbench.action.openGlobalSettings
    // - workbench.action.openIntroductoryVideosUrl
    // - workbench.action.openIssueReporter
    // - workbench.action.openLicenseUrl
    // - workbench.action.openLogFile
    // - workbench.action.openLogsFolder
    // - workbench.action.openNewsletterSignupUrl
    // - workbench.action.openNextRecentlyUsedEditor
    // - workbench.action.openNextRecentlyUsedEditorInGroup
    // - workbench.action.openPreviousEditorFromHistory
    // - workbench.action.openPreviousRecentlyUsedEditor
    // - workbench.action.openPreviousRecentlyUsedEditorInGroup
    // - workbench.action.openPrivacyStatementUrl
    // - workbench.action.openProcessExplorer
    // - workbench.action.openRawDefaultSettings
    // - workbench.action.openRemoteSettings
    // - workbench.action.openRequestFeatureUrl
    // - workbench.action.openSettings2
    // - workbench.action.openSettingsJson
    // - workbench.action.openSnippets
    // - workbench.action.openTipsAndTricksUrl
    // - workbench.action.openTwitterUrl
    // - workbench.action.openView
    // - workbench.action.openWalkthrough
    // - workbench.action.openWorkspace
    // - workbench.action.openWorkspaceConfigFile
    // - workbench.action.openWorkspaceInNewWindow
    // - workbench.action.openWorkspaceSettings
    // - workbench.action.openWorkspaceSettingsFile
    // - workbench.action.positionPanelBottom
    // - workbench.action.positionPanelLeft
    // - workbench.action.positionPanelRight
    // - workbench.action.previousPanelView
    // - workbench.action.previousSideBarView
    // - workbench.action.problems.focus
    // - workbench.action.quickOpenLeastRecentlyUsedEditor
    // - workbench.action.quickOpenNavigateNext
    // - workbench.action.quickOpenNavigateNextInTerminalPicker
    // - workbench.action.quickOpenNavigatePrevious
    // - workbench.action.quickOpenNavigatePreviousInTerminalPicker
    // - workbench.action.quickOpenPreviousEditor
    // - workbench.action.quickOpenPreviousRecentlyUsedEditor
    // - workbench.action.quickOpenRecent
    // - workbench.action.quickOpenSelectNext
    // - workbench.action.quickOpenSelectPrevious
    // - workbench.action.quickOpenTerm
    // - workbench.action.quickPickManyToggle
    // - workbench.action.quickSwitchWindow
    // - workbench.action.quit
    // - workbench.action.reloadWindowWithExtensionsDisabled
    // - workbench.action.remote.close
    // - workbench.action.remote.extensions
    // - workbench.action.remote.showMenu
    // - workbench.action.removeRootFolder
    // - workbench.action.reopenTextEditor
    // - workbench.action.reopenWithEditor
    // - workbench.action.reportPerformanceIssueUsingReporter
    // - workbench.action.resetFocusedViewLocation
    // - workbench.action.resetViewLocations
    // - workbench.action.restartExtensionHost
    // - workbench.action.revertAndCloseActiveEditor
    // - workbench.action.saveWorkspaceAs
    // - workbench.action.selectIconTheme
    // - workbench.action.selectProductIconTheme
    // - workbench.action.setLogLevel
    // - workbench.action.showAboutDialog
    // - workbench.action.showAllEditorsByMostRecentlyUsed
    // - workbench.action.showEditorsInActiveGroup
    // - workbench.action.showEditorsInGroup
    // - workbench.action.showEmmetCommands
    // - workbench.action.showErrorsWarnings
    // - workbench.action.showInteractivePlayground
    // - workbench.action.showInterfaceOverview
    // - workbench.action.showLogs
    // - workbench.action.showRuntimeExtensions
    // - workbench.action.showWindowLog
    // - workbench.action.splitEditorDown
    // - workbench.action.splitEditorLeft
    // - workbench.action.splitEditorRight
    // - workbench.action.splitEditorUp
    // - workbench.action.switchWindow
    // - workbench.action.tasks.configureDefaultBuildTask
    // - workbench.action.tasks.configureDefaultTestTask
    // - workbench.action.tasks.configureTaskRunner
    // - workbench.action.tasks.manageAutomaticRunning
    // - workbench.action.tasks.openUserTasks
    // - workbench.action.tasks.openWorkspaceFileTasks
    // - workbench.action.tasks.reRunTask
    // - workbench.action.tasks.restartTask
    // - workbench.action.tasks.runTask
    // - workbench.action.tasks.showLog
    // - workbench.action.tasks.showTasks
    // - workbench.action.tasks.terminate
    // - workbench.action.tasks.test
    // - workbench.action.tasks.toggleProblems
    // - workbench.action.terminal.attachToSession
    // - workbench.action.terminal.changeColor
    // - workbench.action.terminal.changeColorInstance
    // - workbench.action.terminal.changeIcon
    // - workbench.action.terminal.changeIconInstance
    // - workbench.action.terminal.clear
    // - workbench.action.terminal.createProfileButton
    // - workbench.action.terminal.detachSession
    // - workbench.action.terminal.focus
    // - workbench.action.terminal.focusAtIndex1
    // - workbench.action.terminal.focusAtIndex2
    // - workbench.action.terminal.focusAtIndex3
    // - workbench.action.terminal.focusAtIndex4
    // - workbench.action.terminal.focusAtIndex5
    // - workbench.action.terminal.focusAtIndex6
    // - workbench.action.terminal.focusAtIndex7
    // - workbench.action.terminal.focusAtIndex8
    // - workbench.action.terminal.focusAtIndex9
    // - workbench.action.terminal.joinInstance
    // - workbench.action.terminal.kill
    // - workbench.action.terminal.moveToEditor
    // - workbench.action.terminal.moveToEditorInstance
    // - workbench.action.terminal.moveToTerminalPanel
    // - workbench.action.terminal.newInActiveWorkspace
    // - workbench.action.terminal.newWithProfile
    // - workbench.action.terminal.openSettings
    // - workbench.action.terminal.relaunch
    // - workbench.action.terminal.rename
    // - workbench.action.terminal.resizePaneDown
    // - workbench.action.terminal.resizePaneLeft
    // - workbench.action.terminal.resizePaneRight
    // - workbench.action.terminal.resizePaneUp
    // - workbench.action.terminal.runActiveFile
    // - workbench.action.terminal.runSelectedText
    // - workbench.action.terminal.scrollToNextCommand
    // - workbench.action.terminal.scrollToPreviousCommand
    // - workbench.action.terminal.selectAll
    // - workbench.action.terminal.selectDefaultShell
    // - workbench.action.terminal.selectToNextCommand
    // - workbench.action.terminal.selectToNextLine
    // - workbench.action.terminal.selectToPreviousCommand
    // - workbench.action.terminal.selectToPreviousLine
    // - workbench.action.terminal.showEnvironmentInformation
    // - workbench.action.terminal.showTabs
    // - workbench.action.terminal.splitInActiveWorkspace
    // - workbench.action.terminal.switchTerminal
    // - workbench.action.terminal.unsplit
    // - workbench.action.terminal.unsplitInstance
    // - workbench.action.toggleActivityBarVisibility
    // - workbench.action.toggleAutoSave
    // - workbench.action.toggleCenteredLayout
    // - workbench.action.toggleConfirmBeforeClose
    // - workbench.action.toggleEditorType
    // - workbench.action.toggleEditorVisibility
    // - workbench.action.toggleEditorWidths
    // - workbench.action.toggleKeepEditors
    // - workbench.action.toggleKeybindingsLog
    // - workbench.action.toggleMaximizedPanel
    // - workbench.action.toggleMenuBar
    // - workbench.action.toggleMultiCursorModifier
    // - workbench.action.toggleScreencastMode
    // - workbench.action.toggleSearchOnType
    // - workbench.action.toggleSharedProcess
    // - workbench.action.toggleSidebarPosition
    // - workbench.action.toggleStatusbarVisibility
    // - workbench.action.toggleTabsVisibility
    // - workbench.action.url.openUrl
    // - workbench.action.webview.openDeveloperTools
    // - workbench.action.webview.reloadWebviewAction
    // - workbench.actions.sync.editMachineName
    // - workbench.actions.sync.replaceCurrent
    // - workbench.actions.sync.resolveResource
    // - workbench.actions.sync.turnOffSyncOnMachine
    // - workbench.actions.syncData.reset
    // - workbench.actions.treeView.CppReferencesView.collapseAll
    // - workbench.actions.treeView.CppReferencesView.refresh
    // - workbench.actions.treeView.jsBrowserBreakpoints.collapseAll
    // - workbench.actions.treeView.jsBrowserBreakpoints.refresh
    // - workbench.actions.treeView.leetCodeExplorer.collapseAll
    // - workbench.actions.treeView.leetCodeExplorer.refresh
    // - workbench.actions.treeView.memo.collapseAll
    // - workbench.actions.treeView.memo.refresh
    // - workbench.actions.treeView.npm.collapseAll
    // - workbench.actions.treeView.npm.refresh
    // - workbench.actions.treeView.questions.collapseAll
    // - workbench.actions.treeView.questions.refresh
    // - workbench.actions.treeView.references-view.tree.collapseAll
    // - workbench.actions.treeView.references-view.tree.refresh
    // - workbench.actions.treeView.repl.filter
    // - workbench.actions.treeView.testExplorer.filter
    // - workbench.actions.treeView.workbench.panel.markers.view.collapseAll
    // - workbench.actions.treeView.workbench.panel.markers.view.filter
    // - workbench.actions.treeView.workbench.views.sync.localActivity.collapseAll
    // - workbench.actions.treeView.workbench.views.sync.localActivity.refresh
    // - workbench.actions.treeView.workbench.views.sync.machines.collapseAll
    // - workbench.actions.treeView.workbench.views.sync.machines.refresh
    // - workbench.actions.treeView.workbench.views.sync.merges.collapseAll
    // - workbench.actions.treeView.workbench.views.sync.merges.refresh
    // - workbench.actions.treeView.workbench.views.sync.remoteActivity.collapseAll
    // - workbench.actions.treeView.workbench.views.sync.remoteActivity.refresh
    // - workbench.actions.treeView.workbench.views.sync.troubleshoot.collapseAll
    // - workbench.actions.treeView.workbench.views.sync.troubleshoot.refresh
    // - workbench.actions.view.toggleProblems
    // - workbench.debug.action.copyAll
    // - workbench.debug.action.focusBreakpointsView
    // - workbench.debug.action.focusCallStackView
    // - workbench.debug.action.focusRepl
    // - workbench.debug.action.focusVariablesView
    // - workbench.debug.action.focusWatchView
    // - workbench.debug.breakPointsView.removeView
    // - workbench.debug.breakPointsView.resetViewLocation
    // - workbench.debug.breakPointsView.toggleVisibility
    // - workbench.debug.callStackView.removeView
    // - workbench.debug.callStackView.resetViewLocation
    // - workbench.debug.callStackView.toggleVisibility
    // - workbench.debug.loadedScriptsView.focus
    // - workbench.debug.loadedScriptsView.resetViewLocation
    // - workbench.debug.panel.action.clearReplAction
    // - workbench.debug.variablesView.removeView
    // - workbench.debug.variablesView.resetViewLocation
    // - workbench.debug.variablesView.toggleVisibility
    // - workbench.debug.viewlet.action.addFunctionBreakpointAction
    // - workbench.debug.viewlet.action.addWatchExpression
    // - workbench.debug.viewlet.action.copyValue
    // - workbench.debug.viewlet.action.disableAllBreakpoints
    // - workbench.debug.viewlet.action.enableAllBreakpoints
    // - workbench.debug.viewlet.action.reapplyBreakpointsAction
    // - workbench.debug.viewlet.action.removeAllBreakpoints
    // - workbench.debug.viewlet.action.removeAllWatchExpressions
    // - workbench.debug.viewlet.action.removeBreakpoint
    // - workbench.debug.viewlet.action.toggleBreakpointsActivatedAction
    // - workbench.debug.watchExpressionsView.removeView
    // - workbench.debug.watchExpressionsView.resetViewLocation
    // - workbench.debug.watchExpressionsView.toggleVisibility
    // - workbench.debug.welcome.focus
    // - workbench.debug.welcome.resetViewLocation
    // - workbench.explorer.fileView.focus
    // - workbench.explorer.fileView.removeView
    // - workbench.explorer.fileView.resetViewLocation
    // - workbench.explorer.fileView.toggleVisibility
    // - workbench.explorer.openEditorsView.removeView
    // - workbench.explorer.openEditorsView.resetViewLocation
    // - workbench.explorer.openEditorsView.toggleVisibility
    // - workbench.extensions.action.addExtensionToWorkspaceRecommendations
    // - workbench.extensions.action.addToWorkspaceFolderIgnoredRecommendations
    // - workbench.extensions.action.addToWorkspaceFolderRecommendations
    // - workbench.extensions.action.addToWorkspaceIgnoredRecommendations
    // - workbench.extensions.action.addToWorkspaceRecommendations
    // - workbench.extensions.action.checkForUpdates
    // - workbench.extensions.action.clearExtensionsSearchResults
    // - workbench.extensions.action.configure
    // - workbench.extensions.action.configureWorkspaceFolderRecommendedExtensions
    // - workbench.extensions.action.configureWorkspaceRecommendedExtensions
    // - workbench.extensions.action.copyExtension
    // - workbench.extensions.action.copyExtensionId
    // - workbench.extensions.action.debugExtensionHost
    // - workbench.extensions.action.disableAll
    // - workbench.extensions.action.disableAllWorkspace
    // - workbench.extensions.action.disableAutoUpdate
    // - workbench.extensions.action.enableAll
    // - workbench.extensions.action.enableAllWorkspace
    // - workbench.extensions.action.enableAutoUpdate
    // - workbench.extensions.action.extensionHostProfile
    // - workbench.extensions.action.ignoreRecommendation
    // - workbench.extensions.action.install.specificVersion
    // - workbench.extensions.action.installExtensions
    // - workbench.extensions.action.installVSIX
    // - workbench.extensions.action.installWebExtensionFromLocation
    // - workbench.extensions.action.installWorkspaceRecommendedExtensions
    // - workbench.extensions.action.listBuiltInExtensions
    // - workbench.extensions.action.listOutdatedExtensions
    // - workbench.extensions.action.listWorkspaceUnsupportedExtensions
    // - workbench.extensions.action.manageAuthorizedExtensionURIs
    // - workbench.extensions.action.openExtensionsFolder
    // - workbench.extensions.action.recentlyPublishedExtensions
    // - workbench.extensions.action.refreshExtension
    // - workbench.extensions.action.reinstall
    // - workbench.extensions.action.removeExtensionFromWorkspaceRecommendations
    // - workbench.extensions.action.saveExtensionHostProfile
    // - workbench.extensions.action.showAzureExtensions
    // - workbench.extensions.action.showDisabledExtensions
    // - workbench.extensions.action.showEnabledExtensions
    // - workbench.extensions.action.showExtensionsForLanguage
    // - workbench.extensions.action.showExtensionsWithIds
    // - workbench.extensions.action.showInstalledExtensions
    // - workbench.extensions.action.showLanguageExtensions
    // - workbench.extensions.action.showPopularExtensions
    // - workbench.extensions.action.showRecommendedExtensions
    // - workbench.extensions.action.stopExtensionHostProfile
    // - workbench.extensions.action.toggleIgnoreExtension
    // - workbench.extensions.action.undoIgnoredRecommendation
    // - workbench.extensions.action.updateAllExtensions
    // - workbench.extensions.command.installFromVSIX
    // - workbench.extensions.installMissingDependencies
    // - workbench.files.action.acceptLocalChanges
    // - workbench.files.action.collapseExplorerFolders
    // - workbench.files.action.compareFileWith
    // - workbench.files.action.createFileFromExplorer
    // - workbench.files.action.createFolderFromExplorer
    // - workbench.files.action.focusFilesExplorer
    // - workbench.files.action.refreshFilesExplorer
    // - workbench.files.action.revertLocalChanges
    // - workbench.files.action.saveAllInGroup
    // - workbench.files.action.showActiveFileInExplorer
    // - workbench.getCodeExchangeProxyEndpoints
    // - workbench.notebook.layout.configure
    // - workbench.notebook.layout.gettingStarted
    // - workbench.notebook.layout.select
    // - workbench.output.action.clearOutput
    // - workbench.output.action.switchBetweenOutputs
    // - workbench.output.action.toggleAutoScroll
    // - workbench.panel.markers.resetViewContainerLocation
    // - workbench.panel.markers.view.focus
    // - workbench.panel.markers.view.removeView
    // - workbench.panel.markers.view.resetViewLocation
    // - workbench.panel.markers.view.toggleVisibility
    // - workbench.panel.output.focus
    // - workbench.panel.output.removeView
    // - workbench.panel.output.resetViewContainerLocation
    // - workbench.panel.output.resetViewLocation
    // - workbench.panel.output.toggleVisibility
    // - workbench.panel.repl.resetViewContainerLocation
    // - workbench.panel.repl.view.focus
    // - workbench.panel.repl.view.removeView
    // - workbench.panel.repl.view.resetViewLocation
    // - workbench.panel.repl.view.toggleVisibility
    // - workbench.scm.action.collapseAllRepositories
    // - workbench.scm.action.expandAllRepositories
    // - workbench.scm.action.setListViewMode
    // - workbench.scm.action.setSortKey.name
    // - workbench.scm.action.setSortKey.path
    // - workbench.scm.action.setSortKey.status
    // - workbench.scm.action.setTreeViewMode
    // - workbench.scm.focus
    // - workbench.scm.removeView
    // - workbench.scm.repositories.focus
    // - workbench.scm.repositories.removeView
    // - workbench.scm.repositories.resetViewLocation
    // - workbench.scm.repositories.toggleVisibility
    // - workbench.scm.resetViewLocation
    // - workbench.scm.toggleVisibility
    // - workbench.trust.configure
    // - workbench.trust.manage
    // - workbench.userData.actions.askToTunrOnAfterInit
    // - workbench.userData.actions.openSyncBackupsFolder
    // - workbench.userData.actions.signin
    // - workbench.userData.actions.turningOn
    // - workbench.userDataSync.actions.configure
    // - workbench.userDataSync.actions.help
    // - workbench.userDataSync.actions.manage
    // - workbench.userDataSync.actions.resolveKeybindingsConflicts
    // - workbench.userDataSync.actions.resolveSettingsConflicts
    // - workbench.userDataSync.actions.resolveSnippetsConflicts
    // - workbench.userDataSync.actions.settings
    // - workbench.userDataSync.actions.showLog
    // - workbench.userDataSync.actions.showSyncedData
    // - workbench.userDataSync.actions.syncNow
    // - workbench.userDataSync.actions.turnOff
    // - workbench.userDataSync.actions.turnOn
    // - workbench.view.debug.resetViewContainerLocation
    // - workbench.view.explorer.resetViewContainerLocation
    // - workbench.view.extension.leetcode
    // - workbench.view.extension.leetcode.resetViewContainerLocation
    // - workbench.view.extension.package-algorithm
    // - workbench.view.extension.package-algorithm.resetViewContainerLocation
    // - workbench.view.extension.references-view
    // - workbench.view.extension.references-view.resetViewContainerLocation
    // - workbench.view.extension.test
    // - workbench.view.extension.test.resetViewContainerLocation
    // - workbench.view.extensions.resetViewContainerLocation
    // - workbench.view.remote
    // - workbench.view.remote.resetViewContainerLocation
    // - workbench.view.scm.resetViewContainerLocation
    // - workbench.view.search.focus
    // - workbench.view.search.removeView
    // - workbench.view.search.resetViewContainerLocation
    // - workbench.view.search.resetViewLocation
    // - workbench.view.search.toggleVisibility
    // - workbench.view.sync
    // - workbench.view.sync.resetViewContainerLocation
    // - workbench.view.testing.focus
    // - workbench.view.testing.resetViewLocation
    // - workbench.views.extensions.builtinFeatureExtensions.focus
    // - workbench.views.extensions.builtinFeatureExtensions.resetViewLocation
    // - workbench.views.extensions.builtinProgrammingLanguageExtensions.focus
    // - workbench.views.extensions.builtinProgrammingLanguageExtensions.resetViewLocation
    // - workbench.views.extensions.builtinThemeExtensions.focus
    // - workbench.views.extensions.builtinThemeExtensions.resetViewLocation
    // - workbench.views.extensions.disabled.focus
    // - workbench.views.extensions.disabled.resetViewLocation
    // - workbench.views.extensions.enabled.focus
    // - workbench.views.extensions.enabled.resetViewLocation
    // - workbench.views.extensions.installed.empty.focus
    // - workbench.views.extensions.installed.empty.resetViewLocation
    // - workbench.views.extensions.installed.focus
    // - workbench.views.extensions.installed.resetViewLocation
    // - workbench.views.extensions.marketplace.focus
    // - workbench.views.extensions.marketplace.resetViewLocation
    // - workbench.views.extensions.otherRecommendations.focus
    // - workbench.views.extensions.otherRecommendations.resetViewLocation
    // - workbench.views.extensions.popular.focus
    // - workbench.views.extensions.popular.resetViewLocation
    // - workbench.views.extensions.searchBuiltin.focus
    // - workbench.views.extensions.searchBuiltin.resetViewLocation
    // - workbench.views.extensions.searchDisabled.focus
    // - workbench.views.extensions.searchDisabled.resetViewLocation
    // - workbench.views.extensions.searchEnabled.focus
    // - workbench.views.extensions.searchEnabled.resetViewLocation
    // - workbench.views.extensions.searchInstalled.focus
    // - workbench.views.extensions.searchInstalled.resetViewLocation
    // - workbench.views.extensions.searchOutdated.focus
    // - workbench.views.extensions.searchOutdated.resetViewLocation
    // - workbench.views.extensions.searchWorkspaceUnsupported.focus
    // - workbench.views.extensions.searchWorkspaceUnsupported.resetViewLocation
    // - workbench.views.extensions.untrustedPartiallySupportedExtensions.focus
    // - workbench.views.extensions.untrustedPartiallySupportedExtensions.resetViewLocation
    // - workbench.views.extensions.untrustedUnsupportedExtensions.focus
    // - workbench.views.extensions.untrustedUnsupportedExtensions.resetViewLocation
    // - workbench.views.extensions.virtualPartiallySupportedExtensions.focus
    // - workbench.views.extensions.virtualPartiallySupportedExtensions.resetViewLocation
    // - workbench.views.extensions.virtualUnsupportedExtensions.focus
    // - workbench.views.extensions.virtualUnsupportedExtensions.resetViewLocation
    // - workbench.views.extensions.workspaceRecommendations.focus
    // - workbench.views.extensions.workspaceRecommendations.resetViewLocation
    // - workbench.views.sync.localActivity.focus
    // - workbench.views.sync.localActivity.resetViewLocation
    // - workbench.views.sync.machines.focus
    // - workbench.views.sync.machines.resetViewLocation
    // - workbench.views.sync.merges.focus
    // - workbench.views.sync.merges.resetViewLocation
    // - workbench.views.sync.remoteActivity.focus
    // - workbench.views.sync.remoteActivity.resetViewLocation
    // - workbench.views.sync.troubleshoot.focus
    // - workbench.views.sync.troubleshoot.resetViewLocation