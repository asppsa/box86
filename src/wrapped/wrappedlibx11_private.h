#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

// all those bss stuff are suspicious
//DATAB(__bss_end__, 4)
//DATAB(_bss_end__, 4)
//DATAB(__bss_start, 4)
//DATAB(__bss_start__, 4)
//DATA(__data_start, 4)
//DATA(_edata, 4)
//DATAB(_end, 4)
//DATAB(__end__, 4)
// __exidx_end  // type r
// __exidx_start    // type r
// _fini
// _init
// KeySymToUcs4
DATAB(_qfree, 4)
// _Utf8GetConvByName
//GO(XActivateScreenSaver
GOM(XAddConnectionWatch, iFEppp)
GO(XAddExtension, pFp)
//GO(XAddHost
//GO(XAddHosts
//GO(XAddPixel
//GO(XAddToExtensionList
//GO(XAddToSaveSet
GO(XAllocClassHint, pFv)
GO(XAllocColor, iFppp)
GO(XAllocColorCells, iFppipipi)
//GO(XAllocColorPlanes
//GO(XAllocIconSize
// _XAllocID
// _XAllocIDs
GO(XAllocNamedColor, iFpuppp)
// _XAllocScratch
GO(XAllocSizeHints, pFv)
//GO(XAllocStandardColormap
// _XAllocTemp
GO(XAllocWMHints, pFv)
//GO(XAllowEvents
GO(XAllPlanes, uFv)
// _XAsyncErrorHandler
GO(XAutoRepeatOff, iFp)
GO(XAutoRepeatOn, iFp)
GO(XBaseFontNameListOfFontSet, pFp)
GO(XBell, iFpi)
//GO(XBitmapBitOrder
//GO(XBitmapPad
//GO(XBitmapUnit
GO(XBlackPixel, uFpi)
//GO(XBlackPixelOfScreen
//GO(XCellsOfScreen
GO(XChangeActivePointerGrab, vFpuuu)
GO(XChangeGC, iFppup)
GO(XChangeKeyboardControl, iFpup)
GO(XChangeKeyboardMapping, iFpiipi)
GO(XChangePointerControl, iFpiiiii)
GO(XChangeProperty, iFppppiipi)
//GO(XChangeSaveSet
GO(XChangeWindowAttributes, iFppup)
GOM(XCheckIfEvent, iFEpppp)
GO(XCheckMaskEvent, iFpup)
GO(XCheckTypedEvent, iFpip)
GO(XCheckTypedWindowEvent, iFppip)
GO(XCheckWindowEvent, iFppup)
//GO(XCirculateSubwindows
//GO(XCirculateSubwindowsDown
//GO(XCirculateSubwindowsUp
GO(XClearArea, iFppiiuui)
GO(XClearWindow, iFpp)
GO(XClipBox, iFpp)
GOM(XCloseDisplay, iFEp)
GO(XCloseIM, iFu)
// _XCloseLC
//GO(XCloseOM
// _XcmsAddCmapRec
//GO(XcmsAddColorSpace
//GO(XcmsAddFunctionSet
//GO(XcmsAllocColor
//GO(XcmsAllocNamedColor
// _XcmsArcTangent
//GO(XcmsCCCOfColormap
//GO(XcmsCIELabClipab
//GO(XcmsCIELabClipL
//GO(XcmsCIELabClipLab
DATA(XcmsCIELabColorSpace, 4)
// _XcmsCIELab_prefix   // type r
//GO(XcmsCIELabQueryMaxC
//GO(XcmsCIELabQueryMaxL
//GO(XcmsCIELabQueryMaxLC
// _XcmsCIELabQueryMaxLCRGB
//GO(XcmsCIELabQueryMinL
//GO(XcmsCIELabToCIEXYZ
//GO(XcmsCIELabWhiteShiftColors
//GO(XcmsCIELuvClipL
//GO(XcmsCIELuvClipLuv
//GO(XcmsCIELuvClipuv
DATA(XcmsCIELuvColorSpace, 4)
// _XcmsCIELuv_prefix   // type r
//GO(XcmsCIELuvQueryMaxC
//GO(XcmsCIELuvQueryMaxL
//GO(XcmsCIELuvQueryMaxLC
// _XcmsCIELuvQueryMaxLCRGB
//GO(XcmsCIELuvQueryMinL
//GO(XcmsCIELuvToCIEuvY
//GO(XcmsCIELuvWhiteShiftColors
DATA(XcmsCIEuvYColorSpace, 4)
// _XcmsCIEuvY_prefix   // type r
//GO(XcmsCIEuvYToCIELuv
//GO(XcmsCIEuvYToCIEXYZ
//GO(XcmsCIEuvYToTekHVC
// _XcmsCIEuvY_ValidSpec
DATA(XcmsCIExyYColorSpace, 4)
// _XcmsCIExyY_prefix   // type r
//GO(XcmsCIExyYToCIEXYZ
DATA(XcmsCIEXYZColorSpace, 4)
// _XcmsCIEXYZ_prefix   // type r
//GO(XcmsCIEXYZToCIELab
//GO(XcmsCIEXYZToCIEuvY
//GO(XcmsCIEXYZToCIExyY
//GO(XcmsCIEXYZToRGBi
// _XcmsCIEXYZ_ValidSpec
//GO(XcmsClientWhitePointOfCCC
//GO(XcmsConvertColors
// _XcmsConvertColorsWithWhitePt
// _XcmsCopyCmapRecAndFree
// _XcmsCopyISOLatin1Lowered
// _XcmsCopyPointerArray
// _XcmsCosine
//GO(XcmsCreateCCC
// _XcmsCubeRoot
DATA(_XcmsDDColorSpaces, 4)
DATA(_XcmsDDColorSpacesInit, 4)
// _XcmsDDConvertColors
//GO(XcmsDefaultCCC
// _XcmsDeleteCmapRec
DATA(_XcmsDIColorSpaces, 4)
DATA(_XcmsDIColorSpacesInit, 4)
// _XcmsDIConvertColors
//GO(XcmsDisplayOfCCC
// _XcmsEqualWhitePts
//GO(XcmsFormatOfPrefix
//GO(XcmsFreeCCC
// _XcmsFreeIntensityMaps
// _XcmsFreePointerArray
// _XcmsGetElement
// _XcmsGetIntensityMap
// _XcmsGetProperty
// _XcmsInitDefaultCCCs
// _XcmsInitScrnInfo
DATA(XcmsLinearRGBFunctionSet, 4)
//GO(XcmsLookupColor
// _XcmsLRGB_InitScrnDefault
//GO(XcmsPrefixOfFormat
// _XcmsPushPointerArray
//GO(XcmsQueryBlack
//GO(XcmsQueryBlue
//GO(XcmsQueryColor
//GO(XcmsQueryColors
//GO(XcmsQueryGreen
//GO(XcmsQueryRed
//GO(XcmsQueryWhite
DATA(_XcmsRegColorSpaces, 4)
// _XcmsRegFormatOfPrefix
// _XcmsResolveColor
// _XcmsResolveColorString
DATA(XcmsRGBColorSpace, 4)
DATA(XcmsRGBiColorSpace, 4)
// _XcmsRGBi_prefix // type r
//GO(XcmsRGBiToCIEXYZ
//GO(XcmsRGBiToRGB
// _XcmsRGB_prefix  // type r
//GO(XcmsRGBToRGBi
// _XcmsRGB_to_XColor
DATA(_XcmsSCCFuncSets, 4)
DATA(_XcmsSCCFuncSetsInit, 4)
//GO(XcmsScreenNumberOfCCC
//GO(XcmsScreenWhitePointOfCCC
//GO(XcmsSetCCCOfColormap
//GO(XcmsSetCompressionProc
// _XcmsSetGetColor
// _XcmsSetGetColors
//GO(XcmsSetWhiteAdjustProc
//GO(XcmsSetWhitePoint
// _XcmsSine
// _XcmsSquareRoot
//GO(XcmsStoreColor
//GO(XcmsStoreColors
// _XcmsTekHVC_CheckModify
//GO(XcmsTekHVCClipC
//GO(XcmsTekHVCClipV
//GO(XcmsTekHVCClipVC
DATA(XcmsTekHVCColorSpace, 4)
// _XcmsTekHVC_prefix   // type r
//GO(XcmsTekHVCQueryMaxC
//GO(XcmsTekHVCQueryMaxV
//GO(XcmsTekHVCQueryMaxVC
// _XcmsTekHVCQueryMaxVCRGB
//GO(XcmsTekHVCQueryMaxVSamples
//GO(XcmsTekHVCQueryMinV
//GO(XcmsTekHVCToCIEuvY
//GO(XcmsTekHVCWhiteShiftColors
DATA(XcmsUNDEFINEDColorSpace, 4)
// _XcmsUnresolveColor
//GO(XcmsVisualOfCCC
// _XColor_to_XcmsRGB
GO(XConfigureWindow, iFppup)
GO(XConnectionNumber, iFp)
// _XConnectXCB
//GO(XContextDependentDrawing
//GO(XContextualDrawing
GO(XConvertCase, vFupp)
GO(XConvertSelection, iFpppppu)
GO(XCopyArea, iFppppiiuuii)
GO(XCopyColormapAndFree, uFpu)
// _XCopyEventCookie
GO(XCopyGC, iFpppu)
GO(XCopyPlane, iFppppiiuuiiu)
// _XCopyToArg
GO(XCreateBitmapFromData, pFpppuu)
GO(XCreateColormap, uFpppi)
GO(XCreateFontCursor, pFpu)
GO(XCreateFontSet, pFppppp)
#ifdef PANDORA
GOM(XCreateGC, pFEppup)
#else
GO(XCreateGC, pFppup)
#endif
//GO(XCreateGlyphCursor
GO(XCreateIC, uFpppppppppppppppp)     // use vararg, so putting an arbitrary number of args, also can have Callbacks ?! Allegro have 7 args and no callback
GOM(XCreateImage, pFEppuiipuuii)
GO(dummy_XCreateImage, pFppuiipuuii)    // to have the wrapper
DATAB(_XCreateMutex_fn, 4)
//GO(XCreateOC
GO(XCreatePixmap, pFppuuu)
GO(XCreatePixmapCursor, pFpppppuu)
GO(XCreatePixmapFromBitmapData, pFpppuuuuu)
GO(XCreateRegion, pFv)
GO(XCreateSimpleWindow, pFppiiuuuuu)
GO(XCreateWindow, pFppiiuuuiupup)
DATAB(_Xdebug, 4)
GO(XDefaultColormap, pFpi)
//GO(XDefaultColormapOfScreen
GO(XDefaultDepth, iFpi)
//GO(XDefaultDepthOfScreen
// _XDefaultError
GO(XDefaultGC, pFpi)
//GO(XDefaultGCOfScreen
GO(_XDefaultIOError, iFp)
// _XDefaultOpenIM
// _XDefaultOpenOM
GO(XDefaultRootWindow, pFp)
GO(XDefaultScreen, pFp)
GO(XDefaultScreenOfDisplay, pFp)
//GO(XDefaultString
GO(XDefaultVisual, pFpi)
//GO(XDefaultVisualOfScreen
// _XDefaultWireError
GO(XDefineCursor, iFppp)
GO(XDeleteContext, iFpui)
//GO(XDeleteModifiermapEntry
GO(XDeleteProperty, iFppp)
// _XDeq
GOM(_XDeqAsyncHandler, vFEpp)
GO(XDestroyIC, vFu)
GOM(XDestroyImage, iFEp)  //need to unbridge
//GO(XDestroyOC
GO(XDestroyRegion, iFp)
GO(XDestroySubwindows, iFpp)
GO(XDestroyWindow, iFpp)
//GO(XDirectionalDependentDrawing
//GO(XDisableAccessControl
//GO(XDisplayCells
GO(XDisplayHeight, iFpi)
GO(XDisplayHeightMM, iFpi)
GO(XDisplayKeycodes, iFppp)
//GO(XDisplayMotionBufferSize
GO(XDisplayName, pFp)
GO(XDisplayOfIM, pFu)
//GO(XDisplayOfOM
//GO(XDisplayOfScreen
//GO(XDisplayPlanes
GO(XDisplayString, pFp)
GO(XDisplayWidth, iFpi)
GO(XDisplayWidthMM, iFpi)
//GO(XDoesBackingStore
//GO(XDoesSaveUnders
GO(XDrawArc, iFpppiiuuii)
//GO(XDrawArcs
//GO(XDrawImageString
//GO(XDrawImageString16
GO(XDrawLine, iFpppiiii)
GO(XDrawLines, iFppppii)
GO(XDrawPoint, iFpppii)
GO(XDrawPoints, iFppppii)
GO(XDrawRectangle, iFpppiiuu)
GO(XDrawRectangles, iFppppi)
GO(XDrawSegments, iFppppi)
GO(XDrawString, iFpppiipi)
GO(XDrawString16, iFpppiipi)
//GO(XDrawText
//GO(XDrawText16
GO(_XEatData, vFpu)
GO(_XEatDataWords, vFpu)
//GO(XEHeadOfExtensionList
GO(XEmptyRegion, iFp)
//GO(XEnableAccessControl
// _XEnq
GO(XEqualRegion, iFpp)
// _XError
DATAB(_XErrorFunction, 4)
//GO(XESetBeforeFlush
GOM(XESetCloseDisplay, pFEpip)
//GO(XESetCopyEventCookie
//GO(XESetCopyGC
//GO(XESetCreateFont
//GO(XESetCreateGC
GOM(XESetError, pFEpip)
//GO(XESetErrorString
GOM(XESetEventToWire, pFEpip)
//GO(XESetFlushGC
//GO(XESetFreeFont
//GO(XESetFreeGC
//GO(XESetPrintErrorValues
//GO(XESetWireToError
GOM(XESetWireToEvent, pFEpip)
//GO(XESetWireToEventCookie
//GO(XEventMaskOfScreen
GO(XEventsQueued, iFpi)
// _XEventsQueued
// _Xevent_to_mask  // type r
// _XEventToWire
GO(XExtendedMaxRequestSize, lFp)
//GO(XExtentsOfFontSet
// _XF86BigfontFreeFontMetrics
// _XF86LoadQueryLocaleFont
//GO(XFetchBuffer
//GO(XFetchBytes
// _XFetchEventCookie
//GO(XFetchName
GO(XFillArc, iFpppiiuuii)
//GO(XFillArcs
GO(XFillPolygon, iFppppiii)
GO(XFillRectangle, iFpppiiuu)
GO(XFillRectangles, iFppppi)
GO(XFilterEvent, iFpp)
GO(XFindContext, iFpuip)
//GO(XFindOnExtensionList
GO(XFlush, iFp)
GO(_XFlush, vFp)
GO(XFlushGC, vFpp)
GO(_XFlushGCCache, vFpp)
GO(XFontsOfFontSet, iFppp)
GO(XForceScreenSaver, iFpi)
GO(XFree, iFp)
// _XFreeAtomTable
GO(XFreeColormap, iFpu)
GO(XFreeColors, iFpppiu)
GO(XFreeCursor, iFpp)
DATAB(_XFreeDisplayLock_fn, 4)
// _XFreeDisplayStructure
// _XFreeEventCookies
GO(XFreeEventData, vFpp)
// _XFreeExtData
GO(XFreeExtensionList, iFp)
GO(XFreeFont, iFpp)
GO(XFreeFontInfo, iFppi)
GO(XFreeFontNames, iFp)
GO(XFreeFontPath, iFp)
GO(XFreeFontSet, vFpp)
GO(XFreeGC, iFpp)
GO(XFreeModifiermap, iFp)
DATAB(_XFreeMutex_fn, 4)
GO(XFreePixmap, iFpp)
GO(XFreeStringList, vFp)
// _XFreeTemp
// _XFreeX11XCBStructure
GO(XGContextFromGC, pFp)
GO(XGeometry, iFpippuuuiipppp)
GO(_XGetAsyncData, vFpppiiii)
GO(_XGetAsyncReply, pFppppiii)
GO(XGetAtomName, pFpp)
GO(XGetAtomNames, iFppip)
// _XGetBitsPerPixel
GO(XGetClassHint, iFppp)
GO(XGetCommand, iFpppp)
GO(XGetDefault, pFppp)
GO(XGetErrorDatabaseText, iFpppppi)
GO(XGetErrorText, iFpipi)
GO(XGetEventData, iFpp)
GO(XGetFontPath, pFpp)
GO(XGetFontProperty, iFppp)
GO(XGetGCValues, iFppup)
GO(XGetGeometry, iFppppppppp)
// _XGetHostname
GO(XGetIconName, iFppp)
//GO(XGetIconSizes
GO(XGetICValues, pFpppppp)      // use varargs...
GOM(XGetImage, pFEppiiuuui)     // return an XImage with callbacks that needs wrapping
GO(XGetIMValues, pFppppppp)     // use varargs
GO(XGetInputFocus, iFppp)
GO(XGetKeyboardControl, iFpp)
GO(XGetKeyboardMapping, pFppip)
// _XGetLCValues
GO(XGetModifierMapping, pFp)
GO(XGetMotionEvents, pFppuup)
//GO(XGetNormalHints
//GO(XGetOCValues
//GO(XGetOMValues
//GOM(XGetPixel, uFEpii)  // need unbridging
GO(dummy_XGetPixel, uFpii)     // for the wrapper
GO(XGetPointerControl, iFpppp)
GO(XGetPointerMapping, iFppi)
GO(_XGetRequest, pFpuu)
GO(XGetRGBColormaps, iFppppp)
// _XGetScanlinePad
GO(XGetScreenSaver, iFppppp)
GO(XGetSelectionOwner, pFpp)
//GO(XGetSizeHints
//GO(XGetStandardColormap
GOM(XGetSubImage, pFEppiiuuuipii)
//GO(XGetTextProperty
GO(XGetTransientForHint, iFppp)
GO(XGetVisualInfo, pFpipp)
GO(XGetWindowAttributes, iFppp)
// _XGetWindowAttributes
GO(XGetWindowProperty, iFpppiiipppppp)
//GO(XGetWMClientMachine
GO(XGetWMColormapWindows, iFpppp)
GO(XGetWMHints, pFpp)
GO(XGetWMIconName, iFppp)
GO(XGetWMName, iFppp)
GO(XGetWMNormalHints, iFpppp)
//GO(XGetWMProtocols
GO(XGetWMSizeHints, iFppppu)
//GO(XGetZoomHints
DATAB(_Xglobal_lock, 4)
GO(XGrabButton, iFpuupiuiipp)
GO(XGrabKey, iFpiupiii)
GO(XGrabKeyboard, iFppuiiu)
GO(XGrabPointer, iFppiuiippu)
GO(XGrabServer, iFp)
DATAB(_XHeadOfDisplayList, 4)
GO(XHeightMMOfScreen, iFp)
GO(XHeightOfScreen, iFp)
DATAB(_Xi18n_lock, 4)
GO(XIconifyWindow, iFppi)
GOM(XIfEvent, iFEpppp)
GO(XImageByteOrder, iFp)
// _XIMCompileResourceList
// _XimGetCharCode
// _XimGetLocaleCode
// _XimLookupMBText
// _XimLookupUTF8Text
// _XimLookupWCText
GO(XIMOfIC, pFu)
// _XimXTransBytesReadable
// _XimXTransClose
// _XimXTransCloseForCloning
// _XimXTransConnect
// _XimXTransDisconnect
// _XimXTransFreeConnInfo
// _XimXTransGetConnectionNumber
// _XimXTransGetHostname
// _XimXTransGetMyAddr
// _XimXTransGetPeerAddr
// _XimXTransIsLocal
// _XimXTransOpenCLTSClient
// _XimXTransOpenCOTSClient
// _XimXTransRead
// _XimXTransReadv
// _XimXTransSetOption
DATA(_XimXTransSocketINET6Funcs, 4)
DATA(_XimXTransSocketINETFuncs, 4)
DATA(_XimXTransSocketLocalFuncs, 4)
DATA(_XimXTransSocketTCPFuncs, 4)
DATA(_XimXTransSocketUNIXFuncs, 4)
// _XimXTransWrite
// _XimXTransWritev
// _XInitDefaultIM
// _XInitDefaultOM
DATAB(_XInitDisplayLock_fn, 4)
// _XInitDynamicIM
// _XInitDynamicOM
GO(XInitExtension, pFpp)
GOM(XInitImage, iFEp)
// _XInitImageFuncPtrs
// _XInitKeysymDB
GO(XInitThreads, uFv)
//GO(XInsertModifiermapEntry
GO(XInstallColormap, iFpp)
GO(XInternalConnectionNumbers, iFppp)
GO(XInternAtom, pFppi)
GO(XInternAtoms, uFppiip)
GO(XIntersectRegion, iFppp)
GO(_XIOError, iFp)
DATAB(_XIOErrorFunction, 4)
// _XIsEventCookie
//GO(XkbAddDeviceLedInfo
//GO(XkbAddGeomColor
//GO(XkbAddGeomDoodad
//GO(XkbAddGeomKey
//GO(XkbAddGeomKeyAlias
//GO(XkbAddGeomOutline
//GO(XkbAddGeomOverlay
//GO(XkbAddGeomOverlayKey
//GO(XkbAddGeomOverlayRow
//GO(XkbAddGeomProperty
//GO(XkbAddGeomRow
//GO(XkbAddGeomSection
//GO(XkbAddGeomShape
//GO(XkbAddKeyType
//GO(XkbAllocClientMap
//GO(XkbAllocCompatMap
//GO(XkbAllocControls
//GO(XkbAllocDeviceInfo
//GO(XkbAllocGeomColors
//GO(XkbAllocGeomDoodads
//GO(XkbAllocGeometry
//GO(XkbAllocGeomKeyAliases
//GO(XkbAllocGeomKeys
//GO(XkbAllocGeomOutlines
//GO(XkbAllocGeomOverlayKeys
//GO(XkbAllocGeomOverlayRows
//GO(XkbAllocGeomOverlays
//GO(XkbAllocGeomPoints
//GO(XkbAllocGeomProps
//GO(XkbAllocGeomRows
//GO(XkbAllocGeomSectionDoodads
//GO(XkbAllocGeomSections
//GO(XkbAllocGeomShapes
//GO(XkbAllocIndicatorMaps
//GO(XkbAllocKeyboard
//GO(XkbAllocNames
//GO(XkbAllocServerMap
//GO(XkbApplyCompatMapToKey
//GO(XkbApplyVirtualModChanges
GO(XkbBell, iFppip)
//GO(XkbBellEvent
//GO(XkbChangeDeviceInfo
//GO(XkbChangeEnabledControls
//GO(XkbChangeKeycodeRange
//GO(XkbChangeMap
//GO(XkbChangeNames
//GO(XkbChangeTypesOfKey
//GO(XkbComputeEffectiveMap
//GO(XkbComputeRowBounds
//GO(XkbComputeSectionBounds
//GO(XkbComputeShapeBounds
//GO(XkbComputeShapeTop
// _XkbCopyFromReadBuffer
//GO(XkbCopyKeyType
//GO(XkbCopyKeyTypes
//GO(XkbDeviceBell
//GO(XkbDeviceBellEvent
//GO(XkbFindOverlayForKey
//GO(XkbForceBell
//GO(XkbForceDeviceBell
GO(XkbFreeClientMap, vFpui)
//GO(XkbFreeCompatMap
//GO(XkbFreeComponentList
//GO(XkbFreeControls
//GO(XkbFreeDeviceInfo
//GO(XkbFreeGeomColors
//GO(XkbFreeGeomDoodads
//GO(XkbFreeGeometry
//GO(XkbFreeGeomKeyAliases
//GO(XkbFreeGeomKeys
//GO(XkbFreeGeomOutlines
//GO(XkbFreeGeomOverlayKeys
//GO(XkbFreeGeomOverlayRows
//GO(XkbFreeGeomOverlays
//GO(XkbFreeGeomPoints
//GO(XkbFreeGeomProperties
//GO(XkbFreeGeomRows
//GO(XkbFreeGeomSections
//GO(XkbFreeGeomShapes
//GO(XkbFreeIndicatorMaps
GO(XkbFreeKeyboard, vFpui)
GO(XkbFreeNames, vFpui)
// _XkbFreeReadBuffer
//GO(XkbFreeServerMap
DATA(_XkbGetAtomNameFunc, 4)
//GO(XkbGetAutoRepeatRate
//GO(XkbGetAutoResetControls
// _XkbGetCharset
//GO(XkbGetCompatMap
GO(XkbGetControls, iFpup)
// _XkbGetConverters
//GO(XkbGetDetectableAutoRepeat
//GO(XkbGetDeviceButtonActions
//GO(XkbGetDeviceInfo
//GO(XkbGetDeviceInfoChanges
//GO(XkbGetDeviceLedInfo
//GO(XkbGetGeometry
//GO(XkbGetIndicatorMap
//GO(XkbGetIndicatorState
//GO(XkbGetKeyActions
//GO(XkbGetKeyBehaviors
GO(XkbGetKeyboard, pFpuu)
//GO(XkbGetKeyboardByName
//GO(XkbGetKeyExplicitComponents
//GO(XkbGetKeyModifierMap
//GO(XkbGetKeySyms
//GO(XkbGetKeyTypes
//GO(XkbGetKeyVirtualModMap
GO(XkbGetMap, pFpuu)
//GO(XkbGetMapChanges
//GO(XkbGetNamedDeviceIndicator
//GO(XkbGetNamedGeometry
GO(XkbGetNamedIndicator, iFpuppppp)
GO(XkbGetNames, iFpup)
//GO(XkbGetPerClientControls
// _XkbGetReadBufferCountedString
// _XkbGetReadBufferPtr
GO(XkbGetState, iFpup)
GO(XkbGetUpdatedMap, iFpup)
//GO(XkbGetVirtualMods
//GO(XkbGetXlibControls
GO(XkbIgnoreExtension, iFp)
//GO(XkbInitCanonicalKeyTypes
// _XkbInitReadBuffer
DATA(_XkbInternAtomFunc, 4)
GO(XkbKeycodeToKeysym, uFpuuu)
//GO(XkbKeysymToModifiers
//GO(XkbKeyTypesForCoreSymbols
//GO(XkbLatchGroup
//GO(XkbLatchModifiers
GO(XkbLibraryVersion, iFpp)
//GO(XkbListComponents
//GO(XkbLockGroup
//GO(XkbLockModifiers
//GO(XkbLookupKeyBinding
GO(XkbLookupKeySym, iFpuupp)
//GO(XkbNoteControlsChanges
// _XkbNoteCoreMapChanges
//GO(XkbNoteDeviceChanges
//GO(XkbNoteMapChanges
//GO(XkbNoteNameChanges
//GO(XkbOpenDisplay
// _XkbPeekAtReadBuffer
GO(XkbQueryExtension, iFpppppp)
// _XkbReadBufferCopyKeySyms
// _XkbReadCopyKeySyms
// _XkbReadGetCompatMapReply
// _XkbReadGetGeometryReply
// _XkbReadGetIndicatorMapReply
// _XkbReadGetMapReply
// _XkbReadGetNamesReply
//GO(XkbRefreshKeyboardMapping
// _XkbReloadDpy
//GO(XkbResizeDeviceButtonActions
//GO(XkbResizeKeyActions
//GO(XkbResizeKeySyms
//GO(XkbResizeKeyType
GO(XkbSelectEventDetails, iFpuuLL)
GO(XkbSelectEvents, iFpuLL)
//GO(XkbSetAtomFuncs
//GO(XkbSetAutoRepeatRate
//GO(XkbSetAutoResetControls
//GO(XkbSetCompatMap
//GO(XkbSetControlslib
//GO(XkbSetDebuggingFlags
GO(XkbSetDetectableAutoRepeat, iFpip)
//GO(XkbSetDeviceButtonActions
//GO(XkbSetDeviceInfo
//GO(XkbSetDeviceLedInfo
//GO(XkbSetGeometry
//GO(XkbSetIgnoreLockMods
//GO(XkbSetIndicatorMap
//GO(XkbSetMap
//GO(XkbSetNamedDeviceIndicator
//GO(XkbSetNamedIndicator
//GO(XkbSetNames
GO(XkbSetPerClientControls, iFpup)
//GO(XkbSetServerInternalMods
//GO(XkbSetXlibControls
// _XkbSkipReadBufferData
//GO(XkbToControl
//GO(XkbTranslateKey
//GO(XkbTranslateKeyCode
GO(XkbTranslateKeySym, iFppupip)
//GO(XkbUpdateActionVirtualMods
//GO(XkbUpdateKeyTypeVirtualMods
//GO(XkbUpdateMapFromCore
GO(XkbUseExtension, iFppp)
//GO(XkbVirtualModsToReal
// _XkbWriteCopyKeySyms
//GO(XkbXlibControlsImplemented
GO(XKeycodeToKeysym, pFppi)
// _XKeycodeToKeysym
// _XKeyInitialize
GO(XKeysymToKeycode, uFpu)
// _XKeysymToKeycode
// _XKeysymToModifiers
GO(XKeysymToString, pFp)
// _XkeyTable   // type r
//GO(XKillClient
//GO(XLastKnownRequestProcessed
// _XlcAddCharSet
// _XlcAddCT
// _XlcAddGB18030LocaleConverters
// _XlcAddLoader
// _XlcAddUtf8Converters
// _XlcAddUtf8LocaleConverters
// _XlcCloseConverter
// _XlcCompareISOLatin1
// _XlcCompileResourceList
// _XlcConvert
// _XlcCopyFromArg
// _XlcCopyToArg
// _XlcCountVaList
// _XlcCreateDefaultCharSet
// _XlcCreateLC
// _XlcCreateLocaleDataBase
// _XlcCurrentLC
// _XlcDbg_printValue
// _XlcDefaultMapModifiers
// _XlcDeInitLoader
// _XlcDestroyLC
// _XlcDestroyLocaleDataBase
// _XlcDynamicLoad
// _XlcFileName
DATA(_XlcGenericMethods, 4)
// _XlcGetCharSet
// _XlcGetCharSetWithSide
// _XlcGetCSValues
// _XlcGetLocaleDataBase
// _XlcGetResource
// _XlcGetValues
// _XlcInitCTInfo
// _XlcInitLoader
// _XlcLocaleDirName
// _XlcLocaleLibDirName
// _XlcMapOSLocaleName
// _Xlcmbstoutf8
// _Xlcmbstowcs
// _Xlcmbtowc
// _XlcNCompareISOLatin1
// _XlcOpenConverter
// _XlcParseCharSet
// _XlcParse_scopemaps
DATA(_XlcPublicMethods, 4)
// _XlcRemoveLoader
// _XlcResetConverter
// _XlcResolveI18NPath
// _XlcResolveLocaleName
// _XlcSetConverter
// _XlcSetValues
// _XlcValidModSyntax
// _XlcVaToArgList
// _Xlcwcstombs
// _Xlcwctomb
GO(XListDepths, pFpii)
GO(XListExtensions, pFpp)
GO(XListFonts, pFppip)
GO(XListFontsWithInfo, pFppipp)
//GO(XListHosts
//GO(XListInstalledColormaps
GO(XListPixmapFormats, pFpp)
GO(XListProperties, pFppp)
GO(XLoadFont, pFpp)
#ifdef PANDORA
GOM(XLoadQueryFont, pFEpp)
#else
GO(XLoadQueryFont, pFpp)
#endif
// xlocaledir
//GO(XLocaleOfFontSet
GO(XLocaleOfIM, pFu)
//GO(XLocaleOfOM
GO(XLockDisplay, vFp)
DATAB(_XLockMutex_fn, 4)
GO(XLookupColor, iFppppp)
GO(XLookupKeysym, uFpi)
// _XLookupKeysym
GO(XLookupString, iFppipp)
// _XLookupString
GO(XLowerWindow, iFpp)
GO(XMapRaised, iFpp)
GO(XMapSubwindows, iFpp)
GO(XMapWindow, iFpp)
GO(XMaskEvent, iFpup)
GO(XMatchVisualInfo, iFpiiip)
//GO(XMaxCmapsOfScreen
GO(XMaxRequestSize, iFp)
//GO(XmbDrawImageString
GO(XmbDrawString, vFppppiipi)
//GO(XmbDrawText
// _Xmblen
GO(XmbLookupString, iFuppipp)
GO(XmbResetIC, pFu)
GO(XmbSetWMProperties, vFpppppippp)
// _Xmbstoutf8
// _Xmbstowcs
GO(XmbTextEscapement, iFppi)
GO(XmbTextExtents, uFppipp)
GO(XmbTextListToTextProperty, iFppiip)
// _XmbTextListToTextProperty
//GO(XmbTextPerCharExtents
GO(XmbTextPropertyToTextList, iFpppp)
// _XmbTextPropertyToTextList
// _Xmbtowc
//GO(XMinCmapsOfScreen
GO(XMoveResizeWindow, iFppiiuu)
GO(XMoveWindow, iFppii)
//GO(XNewModifiermap
GO(XNextEvent, iFpp)
GO(XNextRequest, LFp)
GO(XNoOp, iFp)
// _XNoticeCreateBitmap
// _XNoticePutBitmap
GO(XOffsetRegion, iFpii)
//GO(XOMOfOC
GOM(XOpenDisplay, pFEp)
GO(XOpenIM, uFpppp)
// _XOpenLC
//GO(XOpenOM
// _XParseBaseFontNameList
GO(XParseColor, iFpppp)
GO(XParseGeometry, iFppppp)
GO(XPeekEvent, iFpp)
GOM(XPeekIfEvent, iFEpppp)
GO(XPending, iFp)
//GO(Xpermalloc
//GO(XPlanesOfScreen
GO(XPointInRegion, iFpp)
// _XPollfdCacheAdd
// _XPollfdCacheDel
// _XPollfdCacheInit
GO(XPolygonRegion, pFpii)
GO(XProcessInternalConnection, vFpi)
// _XProcessInternalConnection
// _XProcessWindowAttributes
//GO(XProtocolRevision
//GO(XProtocolVersion
GO(XPutBackEvent, iFpp)
// _XPutBackEvent
GOM(XPutImage, iFEppppiiiiuu)
//GO(XPutPixel
GO(XQLength, iFp)
GO(XQueryBestCursor, iFppuupp)
//GO(XQueryBestSize
//GO(XQueryBestStipple
//GO(XQueryBestTile
GO(XQueryColor, iFppp)
GO(XQueryColors, iFpppi)
GOM(XQueryExtension, iFEppppp)
GO(XQueryFont, pFpp)
GO(XQueryKeymap, iFpp)
GO(XQueryPointer, iFppppppppp)
GO(XQueryTextExtents, iFpppipppp)
GO(XQueryTextExtents16, iFpppipppp)
GO(XQueryTree, pFpppppp)
GO(XRaiseWindow, iFpp)
GO(_XRead, iFppi)
//GO(XReadBitmapFile
//GO(XReadBitmapFileData
// _XReadEvents
GO(_XReadPad, vFppi)
GO(XRebindKeysym, iFpupipi)
GO(XRecolorCursor, iFpppp)
GO(XReconfigureWMWindow, iFppiup)
GO(XRectInRegion, iFpiiuu)
GO(XRefreshKeyboardMapping, iFp)
// _XRefreshKeyboardMapping
// _XRegisterFilterByMask
// _XRegisterFilterByType
GOM(XRegisterIMInstantiateCallback, iFEpppppp)
// _XRegisterInternalConnection
GOM(XRemoveConnectionWatch, iFEppp)
//GO(XRemoveFromSaveSet
//GO(XRemoveHost
//GO(XRemoveHosts
GO(XReparentWindow, iFpppii)
GO(_XReply, iFppii)
GO(XResetScreenSaver, iFp)
GO(XResizeWindow, iFppuu)
GO(XResourceManagerString, pFp)
GO(XRestackWindows, iFppi)
// _XReverse_Bytes
GO(XrmCombineDatabase, vFppi)
GO(XrmCombineFileDatabase, iFppi)
// _XrmDefaultInitParseInfo
GO(XrmDestroyDatabase, vFp)
//GOM(XrmEnumerateDatabase
GO(XrmGetDatabase, pFp)
GO(XrmGetFileDatabase, pFp)
GO(XrmGetResource, iFppppp)
GO(XrmGetStringDatabase, pFp)
GO(XrmInitialize, vFv)
// _XrmInitParseInfo
// _XrmInternalStringToQuark
//GO(XrmLocaleOfDatabase
//GO(XrmMergeDatabases
//GO(XrmParseCommand
//GO(XrmPermStringToQuark
//GO(XrmPutFileDatabase
//GO(XrmPutLineResource
//GO(XrmPutResource
//GO(XrmPutStringResource
//GO(XrmQGetResource
//GO(XrmQGetSearchList
//GO(XrmQGetSearchResource
//GO(XrmQPutResource
//GO(XrmQPutStringResource
//GO(XrmQuarkToString
//GO(XrmSetDatabase
//GO(XrmStringToBindingQuarkList
//GO(XrmStringToQuark
//GO(XrmStringToQuarkList
GO(XrmUniqueQuark, iFv)
GO(XRootWindow, pFpi)
//GO(XRootWindowOfScreen
GO(XRotateBuffers, iFpi)
GO(XRotateWindowProperties, iFpppii)
GO(XSaveContext, iFpuip)
GO(XScreenCount, iFp)
GO(XScreenNumberOfScreen, iFp)
GO(XScreenOfDisplay, pFpi)
// _XScreenOfWindow
//GO(XScreenResourceString
GO(XSelectInput, iFppi)
GO(_XSend, vFppi)
GO(XSendEvent, uFppiip)
GO(XServerVendor, pFp)
GO(XSetAccessControl, iFpi)
GOM(XSetAfterFunction, pFEpp)
GO(XSetArcMode, iFppi)
//GO(XSetAuthorization
#ifdef PANDORA
GOM(XSetBackground, iFEppu)
#else
GO(XSetBackground, iFppu)
#endif
GO(XSetClassHint, iFppp)
GO(XSetClipMask, iFppp)
GO(XSetClipOrigin, iFppii)
GO(XSetClipRectangles, iFppiipii)
// _XSetClipRectangles
GO(XSetCloseDownMode, iFpi)
GO(XSetCommand, iFpppi)
GO(XSetDashes, iFppipi)
GOM(XSetErrorHandler, pFEp)
GO(XSetFillRule, iFppi)
GO(XSetFillStyle, iFppp)
GO(XSetFont, iFppp)
GO(XSetFontPath, iFppi)
#ifdef PANDORA
GOM(XSetForeground, iFEppu)
#else
GO(XSetForeground, iFppu)
#endif
GO(XSetFunction, iFppi)
GO(XSetGraphicsExposures, iFppu)
GO(XSetICFocus, vFu)
GO(XSetIconName, iFppp)
//GO(XSetIconSizes
GO(XSetICValues, pFpppppp)          // use vaarg
// _XSetImage
GO(XSetIMValues, pFppppppppppppp)	// use vaarg
GO(XSetInputFocus, iFppii)
GOM(XSetIOErrorHandler, pFEp)
GO(_XSetLastRequestRead, uFpp)
GO(XSetLineAttributes, iFppuiii)
GO(XSetLocaleModifiers, pFp)
//GO(XSetModifierMapping
GO(XSetNormalHints, iFpppp)
//GO(XSetOCValues
//GO(XSetOMValues
//GO(XSetPlaneMask
//GO(XSetPointerMapping
GO(XSetRegion, iFppp)
//GO(XSetRGBColormaps
GO(XSetScreenSaver, iFpiiii)
GO(XSetSelectionOwner, iFpppu)
//GO(XSetSizeHints
//GO(XSetStandardColormap
GO(XSetStandardProperties, iFpppppppp)
//GO(XSetState
GO(XSetStipple, iFppp)
GO(XSetSubwindowMode, iFppi)
GO(XSetTextProperty, vFpppp)
GO(XSetTile, iFppp)
GO(XSetTransientForHint, iFppp)
GO(XSetTSOrigin, iFppii)
GO(XSetWindowBackground, iFppu)
GO(XSetWindowBackgroundPixmap, iFppp)
//GO(XSetWindowBorder
//GO(XSetWindowBorderPixmap
GO(XSetWindowBorderWidth, iFppu)
GO(XSetWindowColormap, iFppp)
//GO(XSetWMClientMachine
GO(XSetWMColormapWindows, iFpppi)
GO(XSetWMHints, iFppp)
GO(XSetWMIconName, vFppp)
GO(XSetWMName, vFppp)
GO(XSetWMNormalHints, iFppp)
GO(XSetWMProperties, vFpppppippp)
GO(XSetWMProtocols, iFpppi)
GO(XSetWMSizeHints, vFpppu)
//GO(XSetZoomHints
GO(XShrinkRegion, iFpii)
//GO(XStoreBuffer
//GO(XStoreBytes
GO(XStoreColor, iFppp)
GO(XStoreColors, iFpppi)
// _XStoreEventCookie
GO(XStoreName, iFppp)
//GO(XStoreNamedColor
GO(XStringListToTextProperty, iFpip)
GO(XStringToKeysym, uFp)
//GOM(XSubImage, pFEpiiuu)    // need unbridging
GO(dummy_XSubImage, pFpiiuu)    // for the wrapper
GO(XSubtractRegion, iFppp)
GO(XSupportsLocale, iFv)
GO(XSync, iFpu)
GOM(XSynchronize, iFEpi)
GO(XTextExtents, iFppipppp)
GO(XTextExtents16, iFppipppp)
// _XTextHeight
// _XTextHeight16
//GO(XTextPropertyToStringList
GO(XTextWidth, iFppi)
GO(XTextWidth16, iFppi)
DATAB(_Xthread_self_fn, 4)
GO(XTranslateCoordinates, iFpppiippp)
// _XTranslateKey
// _XTranslateKeySym
// _XTryShapeBitmapCursor
GO(XUndefineCursor, iFpp)
//GO(XUngrabButton
GO(XUngrabKey, iFpiup)
GO(XUngrabKeyboard, iFpu)
GO(XUngrabPointer, iFpu)
GO(XUngrabServer, iFp)
GO(XUninstallColormap, iFpp)
GO(XUnionRectWithRegion, iFppp)
GO(XUnionRegion, iFppp)
// _XUnknownCopyEventCookie
// _XUnknownNativeEvent
// _XUnknownWireEvent
// _XUnknownWireEventCookie
GO(XUnloadFont, iFpp)
GO(XUnlockDisplay, vFp)
DATAB(_XUnlockMutex_fn, 4)
GO(XUnmapSubwindows, iFpp)
GO(XUnmapWindow, iFpp)
// _XUnregisterFilter
GOM(XUnregisterIMInstantiateCallback, iFEpppppp)
// _XUnregisterInternalConnection
// _XUnresolveColor
GO(XUnsetICFocus, vFu)
// _XUpdateAtomCache
// _XUpdateGCCache
//GO(Xutf8DrawImageString
GO(Xutf8DrawString, vFppppiipi)
//GO(Xutf8DrawText
GO(Xutf8LookupString, iFuppipp)
GO(Xutf8ResetIC, pFu)
GO(Xutf8SetWMProperties, vFpppppippp)
//GO(Xutf8TextEscapement
GO(Xutf8TextExtents, iFppipp)
GO(Xutf8TextListToTextProperty, iFppiup)
// _Xutf8TextListToTextProperty
//GO(Xutf8TextPerCharExtents
GO(Xutf8TextPropertyToTextList, iFpppp)
// _Xutf8TextPropertyToTextList
GO(XVaCreateNestedList, pFipppppppppppppppppppppp)  // should recreate the function instead...
GO(XVendorRelease, iFp)
// _XVIDtoVisual
GO(XVisualIDFromVisual, uFp)
GO(XWarpPointer, iFpppiiuuii)
//GO(XwcDrawImageString
GO(XwcDrawString, vFppppiipi)
//GO(XwcDrawText
GO(XwcFreeStringList, vFp)
// _XwcFreeStringList
GO(XwcLookupString, iFuppipp)
//GO(XwcResetIC
// _Xwcscmp
// _Xwcscpy
// _Xwcslen
// _Xwcsncmp
// _Xwcsncpy
// _Xwcstombs
GO(XwcTextEscapement, iFppi)
GO(XwcTextExtents, iFppipp)
GO(XwcTextListToTextProperty, iFppiip)
// _XwcTextListToTextProperty
//GO(XwcTextPerCharExtents
GO(XwcTextPropertyToTextList, iFpppp)
// _XwcTextPropertyToTextList
// _Xwctomb
//GO(XWhitePixel
//GO(XWhitePixelOfScreen
//GO(XWidthMMOfScreen
GO(XWidthOfScreen, iFp)
GO(XWindowEvent, iFppup)
GO(_XWireToEvent, iFppp)
GO(XWithdrawWindow, iFppi)
//GO(XWMGeometry
//GO(XWriteBitmapFile
GO(XXorRegion, iFppp)
