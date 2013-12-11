/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * File that holds the function prototypes of the wxWidgets extension
 * 
 * @note
 * Some parts of this file are auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_FUNCTIONS_H_GUARD
#define WXPHP_FUNCTIONS_H_GUARD

/**
 * Predefined handcoded set of functions
 */

PHP_FUNCTION(php_wxExecute);

PHP_FUNCTION(php_wxEntry);

PHP_FUNCTION(php_wxC2D);

PHP_FUNCTION(php_wxLogError);
PHP_FUNCTION(php_wxLogFatalError);
PHP_FUNCTION(php_wxLogGeneric);
PHP_FUNCTION(php_wxLogMessage);
PHP_FUNCTION(php_wxLogStatus);
PHP_FUNCTION(php_wxLogSysError);
PHP_FUNCTION(php_wxLogVerbose);
PHP_FUNCTION(php_wxLogWarning);

/**
 * Space reserved for autogenerated function prototypes
 */
PHP_FUNCTION(php_wxHandleFatalExceptions);

PHP_FUNCTION(php_wxInitialize);

PHP_FUNCTION(php_wxUninitialize);

PHP_FUNCTION(php_wxWakeUpIdle);

PHP_FUNCTION(php_wxYield);

PHP_FUNCTION(php_wxSafeYield);

PHP_FUNCTION(php_wxExit);

PHP_FUNCTION(php_wxIsDragResultOk);

PHP_FUNCTION(php_wxFromString);

PHP_FUNCTION(php_wxToString);

PHP_FUNCTION(php_wxSafeShowMessage);

PHP_FUNCTION(php_wxSysErrorCode);

PHP_FUNCTION(php_wxIsMainThread);

PHP_FUNCTION(php_wxMutexGuiEnter);

PHP_FUNCTION(php_wxMutexGuiLeave);

PHP_FUNCTION(php_wxAboutBox);

PHP_FUNCTION(php_wxBase64Encode);

PHP_FUNCTION(php_wxBase64DecodedSize);

PHP_FUNCTION(php_wxBase64EncodedSize);

PHP_FUNCTION(php_wxBase64Decode);

PHP_FUNCTION(php_wxGetSingleChoiceIndex);

PHP_FUNCTION(php_wxGetSingleChoice);

PHP_FUNCTION(php_wxGetColourFromUser);

PHP_FUNCTION(php_wxAutoBufferedPaintDCFactory);

PHP_FUNCTION(php_wxAbort);

PHP_FUNCTION(php_wxDisableAsserts);

PHP_FUNCTION(php_wxIsDebuggerRunning);

PHP_FUNCTION(php_wxSetDefaultAssertHandler);

PHP_FUNCTION(php_wxTrap);

PHP_FUNCTION(php_wxDirSelector);

PHP_FUNCTION(php_wxNewEventType);

PHP_FUNCTION(php_wxPostEvent);

PHP_FUNCTION(php_wxQueueEvent);

PHP_FUNCTION(php_wxFileSelector);

PHP_FUNCTION(php_wxFileSelectorEx);

PHP_FUNCTION(php_wxLoadFileSelector);

PHP_FUNCTION(php_wxSaveFileSelector);

PHP_FUNCTION(php_wxGetOSDirectory);

PHP_FUNCTION(php_wxParseCommonDialogsFilter);

PHP_FUNCTION(php_wxDirExists);

PHP_FUNCTION(php_wxSplitPath);

PHP_FUNCTION(php_wxRenameFile);

PHP_FUNCTION(php_wxCopyFile);

PHP_FUNCTION(php_wxFileExists);

PHP_FUNCTION(php_wxMatchWild);

PHP_FUNCTION(php_wxPathOnly);

PHP_FUNCTION(php_wxIsWild);

PHP_FUNCTION(php_wxIsAbsolutePath);

PHP_FUNCTION(php_wxGetCwd);

PHP_FUNCTION(php_wxSetWorkingDirectory);

PHP_FUNCTION(php_wxConcatFiles);

PHP_FUNCTION(php_wxRemoveFile);

PHP_FUNCTION(php_wxMkdir);

PHP_FUNCTION(php_wxRmdir);

PHP_FUNCTION(php_wxFindNextFile);

PHP_FUNCTION(php_wxFindFirstFile);

PHP_FUNCTION(php_wxGetFileKind);

PHP_FUNCTION(php_wxGetFontFromUser);

PHP_FUNCTION(php_wxColourDisplay);

PHP_FUNCTION(php_wxDisplayDepth);

PHP_FUNCTION(php_wxSetCursor);

PHP_FUNCTION(php_wxClientDisplayRect);

PHP_FUNCTION(php_wxGetClientDisplayRect);

PHP_FUNCTION(php_wxGetDisplayPPI);

PHP_FUNCTION(php_wxDisplaySize);

PHP_FUNCTION(php_wxGetDisplaySize);

PHP_FUNCTION(php_wxDisplaySizeMM);

PHP_FUNCTION(php_wxGetDisplaySizeMM);

PHP_FUNCTION(php_wxInitAllImageHandlers);

PHP_FUNCTION(php_wxEntryCleanup);

PHP_FUNCTION(php_wxFinite);

PHP_FUNCTION(php_wxIsNaN);

PHP_FUNCTION(php_wxRound);

PHP_FUNCTION(php_wxIsSameDouble);

PHP_FUNCTION(php_wxIsNullDouble);

PHP_FUNCTION(php_wxMessageBox);

PHP_FUNCTION(php_wxGetNumberFromUser);

PHP_FUNCTION(php_wxCreateDynamicObject);

PHP_FUNCTION(php_wxFindWindowAtPointer);

PHP_FUNCTION(php_wxGetActiveWindow);

PHP_FUNCTION(php_wxGetTopLevelParent);

PHP_FUNCTION(php_wxRichTextHasStyle);

PHP_FUNCTION(php_wxRichTextCombineBitlists);

PHP_FUNCTION(php_wxRichTextBitlistsEqPartial);

PHP_FUNCTION(php_wxRichTextDecimalToRoman);

PHP_FUNCTION(php_wxTextAttrCollectCommonAttributes);

PHP_FUNCTION(php_wxRichTextModuleInit);

PHP_FUNCTION(php_wxGetStockLabel);

PHP_FUNCTION(php_wxGetTextFromUser);

PHP_FUNCTION(php_wxGetPasswordFromUser);

PHP_FUNCTION(php_wxGetTimeZone);

PHP_FUNCTION(php_wxGetLocalTime);

PHP_FUNCTION(php_wxGetUTCTime);

PHP_FUNCTION(php_wxStringTokenize);

PHP_FUNCTION(php_wxGetTranslation);

PHP_FUNCTION(php_wxBeginBusyCursor);

PHP_FUNCTION(php_wxEndBusyCursor);

PHP_FUNCTION(php_wxIsBusy);

PHP_FUNCTION(php_wxBell);

PHP_FUNCTION(php_wxInfoMessageBox);

PHP_FUNCTION(php_wxGetLibraryVersionInfo);

PHP_FUNCTION(php_wxGetenv);

PHP_FUNCTION(php_wxSetEnv);

PHP_FUNCTION(php_wxUnsetEnv);

PHP_FUNCTION(php_wxGetBatteryState);

PHP_FUNCTION(php_wxGetPowerType);

PHP_FUNCTION(php_wxGetKeyState);

PHP_FUNCTION(php_wxGetMousePosition);

PHP_FUNCTION(php_wxGetMouseState);

PHP_FUNCTION(php_wxEnableTopLevelWindows);

PHP_FUNCTION(php_wxFindWindowAtPoint);

PHP_FUNCTION(php_wxFindWindowByLabel);

PHP_FUNCTION(php_wxFindWindowByName);

PHP_FUNCTION(php_wxFindMenuItemId);

PHP_FUNCTION(php_wxNewId);

PHP_FUNCTION(php_wxRegisterId);

PHP_FUNCTION(php_wxLaunchDefaultApplication);

PHP_FUNCTION(php_wxLaunchDefaultBrowser);

PHP_FUNCTION(php_wxStripMenuCodes);

PHP_FUNCTION(php_wxGetHomeDir);

PHP_FUNCTION(php_wxGetFullHostName);

PHP_FUNCTION(php_wxGetUserHome);

PHP_FUNCTION(php_wxGetOsDescription);

PHP_FUNCTION(php_wxGetOsVersion);

PHP_FUNCTION(php_wxIsPlatform64Bit);

PHP_FUNCTION(php_wxIsPlatformLittleEndian);

PHP_FUNCTION(php_wxGetProcessId);

PHP_FUNCTION(php_wxKill);

PHP_FUNCTION(php_wxShell);

PHP_FUNCTION(php_wxShutdown);

PHP_FUNCTION(php_wxMicroSleep);

PHP_FUNCTION(php_wxMilliSleep);

PHP_FUNCTION(php_wxNow);

PHP_FUNCTION(php_wxSleep);

PHP_FUNCTION(php_wxUsleep);

PHP_FUNCTION(php_wxIsEmpty);

PHP_FUNCTION(php_wxTmemchr);

PHP_FUNCTION(php_wxTmemcmp);

PHP_FUNCTION(php_wxTmemcpy);

PHP_FUNCTION(php_wxTmemmove);

PHP_FUNCTION(php_wxTmemset);

PHP_FUNCTION(php_wxSetlocale);

PHP_FUNCTION(php_wxStrlen);

PHP_FUNCTION(php_wxStrnlen);

PHP_FUNCTION(php_wxStrdup);

PHP_FUNCTION(php_wxStrcpy);

PHP_FUNCTION(php_wxStrncpy);

PHP_FUNCTION(php_wxStrlcpy);

PHP_FUNCTION(php_wxStrcat);

PHP_FUNCTION(php_wxStrncat);

PHP_FUNCTION(php_wxStrxfrm);

PHP_FUNCTION(php_wxStrstr);

PHP_FUNCTION(php_wxStrchr);

PHP_FUNCTION(php_wxStrrchr);

PHP_FUNCTION(php_wxStrpbrk);

PHP_FUNCTION(php_wxRemove);

PHP_FUNCTION(php_wxRename);

PHP_FUNCTION(php_wxAtoi);

PHP_FUNCTION(php_wxAtol);

PHP_FUNCTION(php_wxAtof);

PHP_FUNCTION(php_wxSystem);

PHP_FUNCTION(php_wxDynamicCast);



#endif //WXPHP_FUNCTIONS_H_GUARD
