; Listing generated by Microsoft (R) Optimizing Compiler Version 19.29.30038.1 

	TITLE	C:\TouchGFXProjects\MyApplication_13\TouchGFX\build\Debug\obj\TypedTextDatabase.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?typedText_database_DEFAULT@@3QBUTypedTextData@TypedText@touchgfx@@B ; typedText_database_DEFAULT
PUBLIC	?typedTextDatabaseArray@@3QBQBUTypedTextData@TypedText@touchgfx@@B ; typedTextDatabaseArray
msvcjmc	SEGMENT
__887A36F9_Types@hpp DB 01H
__B9E9F780_Unicode@hpp DB 01H
__7415CF4A_Font@hpp DB 01H
__BD49EDE5_Texts@hpp DB 01H
__5B6BCFB8_TypedText@hpp DB 01H
__44ABF3AB_ConstFont@hpp DB 01H
__75B3993B_GeneratedFont@hpp DB 01H
__CC461EC5_TypedTextDatabase@cpp DB 01H
msvcjmc	ENDS
CONST	SEGMENT
?typedText_database_DEFAULT@@3QBUTypedTextData@TypedText@touchgfx@@B DB 02H ; typedText_database_DEFAULT
	DB	01H
	DB	02H
	DB	01H
	DB	00H
	DB	00H
	DB	00H
	DB	00H
	DB	00H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	02H
	DB	01H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	02H
	DB	01H
	DB	02H
	DB	01H
	DB	00H
	DB	00H
	DB	00H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	02H
	DB	01H
	DB	00H
	DB	00H
	DB	00H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
	DB	01H
	DB	00H
?typedTextDatabaseArray@@3QBQBUTypedTextData@TypedText@touchgfx@@B DD FLAT:?typedText_database_DEFAULT@@3QBUTypedTextData@TypedText@touchgfx@@B ; typedTextDatabaseArray
CONST	ENDS
PUBLIC	?getInstance@TypedTextDatabase@@YAPBUTypedTextData@TypedText@touchgfx@@G@Z ; TypedTextDatabase::getInstance
PUBLIC	?getFonts@TypedTextDatabase@@YAPAPBVFont@touchgfx@@XZ ; TypedTextDatabase::getFonts
PUBLIC	?setFont@TypedTextDatabase@@YAPBVFont@touchgfx@@GPBV23@@Z ; TypedTextDatabase::setFont
PUBLIC	?resetFont@TypedTextDatabase@@YAXG@Z		; TypedTextDatabase::resetFont
PUBLIC	?getInstanceSize@TypedTextDatabase@@YAGXZ	; TypedTextDatabase::getInstanceSize
PUBLIC	__JustMyCode_Default
PUBLIC	?touchgfx_fonts@@3PAPBVFont@touchgfx@@A		; touchgfx_fonts
EXTRN	?getFont_VLADIMIR_TTF_25_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ:PROC ; getFont_VLADIMIR_TTF_25_4bpp
EXTRN	?getFont_verdana_40_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ:PROC ; getFont_verdana_40_4bpp
EXTRN	?getFont_verdana_10_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ:PROC ; getFont_verdana_10_4bpp
EXTRN	?getFont_verdana_20_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ:PROC ; getFont_verdana_20_4bpp
EXTRN	@__CheckForDebuggerJustMyCode@4:PROC
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_InitBase:PROC
EXTRN	__RTC_Shutdown:PROC
_BSS	SEGMENT
?touchgfx_fonts@@3PAPBVFont@touchgfx@@A DD 04H DUP (?)	; touchgfx_fonts
_BSS	ENDS
CRT$XCU	SEGMENT
?touchgfx_fonts$initializer$@@3P6AXXZA DD FLAT:??__Etouchgfx_fonts@@YAXXZ ; touchgfx_fonts$initializer$
CRT$XCU	ENDS
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
rtc$IMZ	ENDS
; Function compile flags: /Odt
;	COMDAT __JustMyCode_Default
_TEXT	SEGMENT
__JustMyCode_Default PROC				; COMDAT
	push	ebp
	mov	ebp, esp
	pop	ebp
	ret	0
__JustMyCode_Default ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??__Etouchgfx_fonts@@YAXXZ
text$di	SEGMENT
??__Etouchgfx_fonts@@YAXXZ PROC				; `dynamic initializer for 'touchgfx_fonts'', COMDAT
; File C:\TouchGFXProjects\MyApplication_13\TouchGFX\generated\texts\src\TypedTextDatabase.cpp
; Line 18
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	mov	edi, ebp
	xor	ecx, ecx
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __CC461EC5_TypedTextDatabase@cpp
	call	@__CheckForDebuggerJustMyCode@4
; Line 14
	call	?getFont_VLADIMIR_TTF_25_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_VLADIMIR_TTF_25_4bpp
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A, eax
; Line 15
	call	?getFont_verdana_40_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_verdana_40_4bpp
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A+4, eax
; Line 16
	call	?getFont_verdana_10_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_verdana_10_4bpp
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A+8, eax
; Line 17
	call	?getFont_verdana_20_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_verdana_20_4bpp
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A+12, eax
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
??__Etouchgfx_fonts@@YAXXZ ENDP				; `dynamic initializer for 'touchgfx_fonts''
text$di	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?getInstanceSize@TypedTextDatabase@@YAGXZ
_TEXT	SEGMENT
?getInstanceSize@TypedTextDatabase@@YAGXZ PROC		; TypedTextDatabase::getInstanceSize, COMDAT
; File C:\TouchGFXProjects\MyApplication_13\TouchGFX\generated\texts\src\TypedTextDatabase.cpp
; Line 66
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	mov	edi, ebp
	xor	ecx, ecx
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __CC461EC5_TypedTextDatabase@cpp
	call	@__CheckForDebuggerJustMyCode@4
; Line 67
	mov	eax, 26					; 0000001aH
; Line 68
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?getInstanceSize@TypedTextDatabase@@YAGXZ ENDP		; TypedTextDatabase::getInstanceSize
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?resetFont@TypedTextDatabase@@YAXG@Z
_TEXT	SEGMENT
tv65 = -196						; size = 4
_fontId$ = 8						; size = 2
?resetFont@TypedTextDatabase@@YAXG@Z PROC		; TypedTextDatabase::resetFont, COMDAT
; File C:\TouchGFXProjects\MyApplication_13\TouchGFX\generated\texts\src\TypedTextDatabase.cpp
; Line 83
	push	ebp
	mov	ebp, esp
	sub	esp, 196				; 000000c4H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-4]
	mov	ecx, 1
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __CC461EC5_TypedTextDatabase@cpp
	call	@__CheckForDebuggerJustMyCode@4
; Line 84
	movzx	eax, WORD PTR _fontId$[ebp]
	mov	DWORD PTR tv65[ebp], eax
	cmp	DWORD PTR tv65[ebp], 3
	ja	SHORT $LN1@resetFont
	mov	ecx, DWORD PTR tv65[ebp]
	jmp	DWORD PTR $LN9@resetFont[ecx*4]
$LN4@resetFont:
; Line 87
	call	?getFont_VLADIMIR_TTF_25_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_VLADIMIR_TTF_25_4bpp
	mov	ecx, 4
	imul	edx, ecx, 0
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A[edx], eax
; Line 88
	jmp	SHORT $LN1@resetFont
$LN5@resetFont:
; Line 90
	call	?getFont_verdana_40_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_verdana_40_4bpp
	mov	ecx, 4
	shl	ecx, 0
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A[ecx], eax
; Line 91
	jmp	SHORT $LN1@resetFont
$LN6@resetFont:
; Line 93
	call	?getFont_verdana_10_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_verdana_10_4bpp
	mov	ecx, 4
	shl	ecx, 1
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A[ecx], eax
; Line 94
	jmp	SHORT $LN1@resetFont
$LN7@resetFont:
; Line 96
	call	?getFont_verdana_20_4bpp@@YAAAVGeneratedFont@touchgfx@@XZ ; getFont_verdana_20_4bpp
	mov	ecx, 4
	imul	edx, ecx, 3
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A[edx], eax
$LN1@resetFont:
; Line 99
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 196				; 000000c4H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	2
$LN9@resetFont:
	DD	$LN4@resetFont
	DD	$LN5@resetFont
	DD	$LN6@resetFont
	DD	$LN7@resetFont
?resetFont@TypedTextDatabase@@YAXG@Z ENDP		; TypedTextDatabase::resetFont
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?setFont@TypedTextDatabase@@YAPBVFont@touchgfx@@GPBV23@@Z
_TEXT	SEGMENT
_old$ = -8						; size = 4
_fontId$ = 8						; size = 2
_font$ = 12						; size = 4
?setFont@TypedTextDatabase@@YAPBVFont@touchgfx@@GPBV23@@Z PROC ; TypedTextDatabase::setFont, COMDAT
; File C:\TouchGFXProjects\MyApplication_13\TouchGFX\generated\texts\src\TypedTextDatabase.cpp
; Line 76
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-12]
	mov	ecx, 3
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __CC461EC5_TypedTextDatabase@cpp
	call	@__CheckForDebuggerJustMyCode@4
; Line 77
	movzx	eax, WORD PTR _fontId$[ebp]
	mov	ecx, DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A[eax*4]
	mov	DWORD PTR _old$[ebp], ecx
; Line 78
	movzx	eax, WORD PTR _fontId$[ebp]
	mov	ecx, DWORD PTR _font$[ebp]
	mov	DWORD PTR ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A[eax*4], ecx
; Line 79
	mov	eax, DWORD PTR _old$[ebp]
; Line 80
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?setFont@TypedTextDatabase@@YAPBVFont@touchgfx@@GPBV23@@Z ENDP ; TypedTextDatabase::setFont
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?getFonts@TypedTextDatabase@@YAPAPBVFont@touchgfx@@XZ
_TEXT	SEGMENT
?getFonts@TypedTextDatabase@@YAPAPBVFont@touchgfx@@XZ PROC ; TypedTextDatabase::getFonts, COMDAT
; File C:\TouchGFXProjects\MyApplication_13\TouchGFX\generated\texts\src\TypedTextDatabase.cpp
; Line 71
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	mov	edi, ebp
	xor	ecx, ecx
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __CC461EC5_TypedTextDatabase@cpp
	call	@__CheckForDebuggerJustMyCode@4
; Line 72
	mov	eax, OFFSET ?touchgfx_fonts@@3PAPBVFont@touchgfx@@A ; touchgfx_fonts
; Line 73
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?getFonts@TypedTextDatabase@@YAPAPBVFont@touchgfx@@XZ ENDP ; TypedTextDatabase::getFonts
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?getInstance@TypedTextDatabase@@YAPBUTypedTextData@TypedText@touchgfx@@G@Z
_TEXT	SEGMENT
_id$ = 8						; size = 2
?getInstance@TypedTextDatabase@@YAPBUTypedTextData@TypedText@touchgfx@@G@Z PROC ; TypedTextDatabase::getInstance, COMDAT
; File C:\TouchGFXProjects\MyApplication_13\TouchGFX\generated\texts\src\TypedTextDatabase.cpp
; Line 61
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	mov	edi, ebp
	xor	ecx, ecx
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __CC461EC5_TypedTextDatabase@cpp
	call	@__CheckForDebuggerJustMyCode@4
; Line 62
	movzx	eax, WORD PTR _id$[ebp]
	mov	eax, DWORD PTR ?typedTextDatabaseArray@@3QBQBUTypedTextData@TypedText@touchgfx@@B[eax*4]
; Line 63
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?getInstance@TypedTextDatabase@@YAPBUTypedTextData@TypedText@touchgfx@@G@Z ENDP ; TypedTextDatabase::getInstance
_TEXT	ENDS
END