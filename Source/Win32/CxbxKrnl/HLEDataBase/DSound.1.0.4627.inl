// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;; 
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['  
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P    
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,  
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->DSound.1.0.4627.cpp
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * CDirectSound::CreateSoundBuffer
// ******************************************************************
SOOVPA<14> CDirectSound_CreateSoundBuffer_1_0_4627 =
{
    0,  // Large == 0
    14, // Count == 14

    XREF_DSCREATESOUNDBUFFER,   // XRef Is  Saved
    0,                          // XRef Not Used

    {
        // CDirectSound_CreateSoundBuffer+0x23 : mov eax, 0x80004005
        { 0x23, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x24, 0x05 }, // (Offset,Value)-Pair #2
        { 0x25, 0x40 }, // (Offset,Value)-Pair #3
        { 0x27, 0x80 }, // (Offset,Value)-Pair #4

        // CDirectSound_CreateSoundBuffer+0x2A : push 0x24
        { 0x2A, 0x6A }, // (Offset,Value)-Pair #5
        { 0x2B, 0x24 }, // (Offset,Value)-Pair #6

        // CDirectSound_CreateSoundBuffer+0x4A : add esi, 0x7FF8FFF2
        { 0x4A, 0x81 }, // (Offset,Value)-Pair #7
        { 0x4B, 0xE6 }, // (Offset,Value)-Pair #8
        { 0x4C, 0xF2 }, // (Offset,Value)-Pair #9
        { 0x4D, 0xFF }, // (Offset,Value)-Pair #10
        { 0x4E, 0xF8 }, // (Offset,Value)-Pair #11
        { 0x4F, 0x7F }, // (Offset,Value)-Pair #12

        // CDirectSound_CreateSoundBuffer+0x99 : retn 0x10
        { 0x99, 0xC2 }, // (Offset,Value)-Pair #13
        { 0x9A, 0x10 }, // (Offset,Value)-Pair #14
    }
};

// ******************************************************************
// * CDirectSound::SetI3DL2Listener
// ******************************************************************
SOOVPA<12> CDirectSound_SetI3DL2Listener_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    XREF_DSSETI3DL2LISTENER,    // XRef Is  Saved
    0,                          // XRef Not Used

    {
        // CDirectSound_SetI3DL2Listener+0x3A : mov edi, 0x88780032
        { 0x3A, 0xBF }, // (Offset,Value)-Pair #1
        { 0x3B, 0x32 }, // (Offset,Value)-Pair #2
        { 0x3C, 0x00 }, // (Offset,Value)-Pair #3
        { 0x3D, 0x78 }, // (Offset,Value)-Pair #4
        { 0x3E, 0x88 }, // (Offset,Value)-Pair #5

        // CDirectSound_SetI3DL2Listener+0xA2 : fstp dword ptr[edx+0x94]
        { 0xA2, 0xD9 }, // (Offset,Value)-Pair #6
        { 0xA3, 0x9A }, // (Offset,Value)-Pair #7
        { 0xA4, 0x94 }, // (Offset,Value)-Pair #8

        // CDirectSound_SetI3DL2Listener+0xDC : jnz +0x06
        { 0xDC, 0x75 }, // (Offset,Value)-Pair #9
        { 0xDD, 0x06 }, // (Offset,Value)-Pair #10

        // CDirectSound_SetI3DL2Listener+0xF7 : retn 0x0C
        { 0xF7, 0xC2 }, // (Offset,Value)-Pair #11
        { 0xF8, 0x0C }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * CDirectSound::SetMixBinHeadroom
// ******************************************************************
SOOVPA<15> CDirectSound_SetMixBinHeadroom_1_0_4627 =
{
    0,  // Large == 0
    15, // Count == 15

    XREF_DSSETMIXBINHEADROOMA,  // XRef Is  Saved
    0,                          // XRef Not Used

    {
        // CDirectSound_SetMixBinHeadroom+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // CDirectSound_SetMixBinHeadroom+0x34 : mov bl, [esp+0x14]
        { 0x34, 0x8A }, // (Offset,Value)-Pair #6
        { 0x35, 0x5C }, // (Offset,Value)-Pair #7
        { 0x36, 0x24 }, // (Offset,Value)-Pair #8
        { 0x37, 0x14 }, // (Offset,Value)-Pair #9

        // CDirectSound_SetMixBinHeadroom+0x39 : mov [edx+ecx+0x14], bl
        { 0x39, 0x88 }, // (Offset,Value)-Pair #10
        { 0x3A, 0x5C }, // (Offset,Value)-Pair #11
        { 0x3B, 0x0A }, // (Offset,Value)-Pair #12
        { 0x3C, 0x14 }, // (Offset,Value)-Pair #13

        // CDirectSound_SetMixBinHeadroom+0x5C : retn 0x0C
        { 0x5C, 0xC2 }, // (Offset,Value)-Pair #14
        { 0x5D, 0x0C }, // (Offset,Value)-Pair #15
    }
};

// ******************************************************************
// * IDirectSound8_SetMixBinHeadroom
// ******************************************************************
SOOVPA<12> IDirectSound8_SetMixBinHeadroom_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSound8_SetMixBinHeadroom+0x19 : call [CDirectSound::SetMixBinHeadroom]
        { 0x19, XREF_DSSETMIXBINHEADROOMA }, // (Offset,Value)-Pair #1

        // IDirectSound8_SetMixBinHeadroom+0x04 : push [esp+0x0C]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound8_SetMixBinHeadroom+0x0E : add eax, 0xFFFFFFF8
        { 0x0E, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0F, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x10, 0xF8 }, // (Offset,Value)-Pair #8

        // IDirectSound8_SetMixBinHeadroom+0x13 : sbb ecx, ecx
        { 0x13, 0x1B }, // (Offset,Value)-Pair #9
        { 0x14, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSound8_SetMixBinHeadroom+0x15 : and ecx, eax
        { 0x15, 0x23 }, // (Offset,Value)-Pair #11
        { 0x16, 0xC8 }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * CDirectSoundVoiceSettings::SetMixBins
// ******************************************************************
SOOVPA<10> CDirectSoundVoiceSettings_SetMixBins_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSSETMIXBINSC,	// XRef Is  Saved
    0,                  // XRef Not Used

    {
        // CDirectSoundVoiceSettings_SetMixBins+0x06 : jnz +0x1A
        { 0x06, 0x75 }, // (Offset,Value)-Pair #1
        { 0x07, 0x1A }, // (Offset,Value)-Pair #2

        // CDirectSoundVoiceSettings_SetMixBins+0x08 : test byte ptr [ecx+8], 0x10
        { 0x08, 0xF6 }, // (Offset,Value)-Pair #3
        { 0x09, 0x41 }, // (Offset,Value)-Pair #4
        { 0x0A, 0x08 }, // (Offset,Value)-Pair #5
        { 0x0B, 0x10 }, // (Offset,Value)-Pair #6

        // CDirectSoundVoiceSettings_SetMixBins+0x2B : jbe +0x2B
        { 0x2B, 0x76 }, // (Offset,Value)-Pair #7
        { 0x2C, 0x2B }, // (Offset,Value)-Pair #8

        // CDirectSoundVoiceSettings_SetMixBins+0xB2 : retn 0x04
        { 0xB2, 0xC2 }, // (Offset,Value)-Pair #9
        { 0xB3, 0x04 }, // (Offset,Value)-Pair #10
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetMixBins
// ******************************************************************
SOOVPA<17> CDirectSoundVoice_SetMixBins_1_0_4627 =
{
    0,  // Large == 0
    17, // Count == 17

    XREF_DSSETMIXBINSB,	// XRef Is Saved
    1,                  // XRef Is Used

    {
        // CDirectSoundVoice_SetMixBins+0x0D : call [CDirectSoundVoiceSettings::SetMixBins]
        { 0x0D, XREF_DSSETMIXBINSC }, // (Offset,Value)-Pair #1

		// CDirectSoundVoice_SetMixBins+0x01 : mov esi, [esp+8]
        { 0x01, 0x8B }, // (Offset,Value)-Pair #2
        { 0x02, 0x74 }, // (Offset,Value)-Pair #3
        { 0x03, 0x24 }, // (Offset,Value)-Pair #4
        { 0x04, 0x08 }, // (Offset,Value)-Pair #5

        // CDirectSoundVoice_SetMixBins+0x05 : push [esp+0x0C]
        { 0x05, 0xFF }, // (Offset,Value)-Pair #6
        { 0x06, 0x74 }, // (Offset,Value)-Pair #7
        { 0x07, 0x24 }, // (Offset,Value)-Pair #8
        { 0x08, 0x0C }, // (Offset,Value)-Pair #9

        // CDirectSoundVoice_SetMixBins+0x09 : mov ecx, [esi+0x10]
        { 0x09, 0x8B }, // (Offset,Value)-Pair #10
        { 0x0A, 0x4E }, // (Offset,Value)-Pair #11
        { 0x0B, 0x10 }, // (Offset,Value)-Pair #12

        // CDirectSoundVoice_SetMixBins+0x11 : mov ecx, [esi+0x0C]
        { 0x11, 0x8B }, // (Offset,Value)-Pair #13
        { 0x12, 0x4E }, // (Offset,Value)-Pair #14
        { 0x13, 0x0C }, // (Offset,Value)-Pair #15

        // CDirectSoundVoice_SetMixBins+0x1A : retn 0x08
        { 0x1A, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x1B, 0x08 }, // (Offset,Value)-Pair #17
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetMixBins
// ******************************************************************
SOOVPA<17> CDirectSoundBuffer_SetMixBins_1_0_4627 =
{
    0,  // Large == 0
    17, // Count == 17

    XREF_DSSETMIXBINSA,	// XRef Is  Saved
    1,                  // XRef Not Used

    {
        // CDirectSoundBuffer_SetMixBins+0x32 : call [CDirectSoundVoice::SetMixBins]
        { 0x32, XREF_DSSETMIXBINSB }, // (Offset,Value)-Pair #1

		// CDirectSoundBuffer_SetMixBins+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #2
        { 0x22, 0x05 }, // (Offset,Value)-Pair #3
        { 0x23, 0x40 }, // (Offset,Value)-Pair #4
        { 0x24, 0x00 }, // (Offset,Value)-Pair #5
        { 0x25, 0x80 }, // (Offset,Value)-Pair #6

        // CDirectSoundBuffer_SetMixBins+0x29 : push [esp+0x10]; push [esp+0x10]
        { 0x29, 0xFF }, // (Offset,Value)-Pair #7
        { 0x2A, 0x74 }, // (Offset,Value)-Pair #8
        { 0x2B, 0x24 }, // (Offset,Value)-Pair #9
        { 0x2C, 0x10 }, // (Offset,Value)-Pair #10
        { 0x2D, 0xFF }, // (Offset,Value)-Pair #11
        { 0x2E, 0x74 }, // (Offset,Value)-Pair #12
        { 0x2F, 0x24 }, // (Offset,Value)-Pair #13
        { 0x30, 0x10 }, // (Offset,Value)-Pair #14

        // CDirectSoundBuffer_SetMixBins+0x49 : pop edi
        { 0x49, 0x5F }, // (Offset,Value)-Pair #15

        // CDirectSoundBuffer_SetMixBins+0x4B : retn 0x08
        { 0x4B, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x4C, 0x08 }, // (Offset,Value)-Pair #17
    }
};

// ******************************************************************
// * IDirectSoundBuffer8_SetMixBins
// ******************************************************************
SOOVPA<12> IDirectSoundBuffer8_SetMixBins_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSoundBuffer8_SetMixBins+0x15 : call [CDirectSoundBuffer::SetMixBins]
        { 0x15, XREF_DSSETMIXBINSA }, // (Offset,Value)-Pair #1

        // IDirectSoundBuffer8_SetMixBins+0x04 : push [esp+0x08]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSoundBuffer8_SetMixBins+0x0A : add eax, 0xFFFFFFE4
        { 0x0A, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0B, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x0C, 0xE4 }, // (Offset,Value)-Pair #8

        // IDirectSoundBuffer8_SetMixBins+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B }, // (Offset,Value)-Pair #9
        { 0x10, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSoundBuffer8_SetMixBins+0x11 : and ecx, eax
        { 0x11, 0x23 }, // (Offset,Value)-Pair #11
        { 0x12, 0xC8 }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * CDirectSoundVoiceSettings::SetMixBinVolumes
// ******************************************************************
SOOVPA<10> CDirectSoundVoiceSettings_SetMixBinVolumes_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSSETMIXBINVOLUMESC,	// XRef Is  Saved
    0,                          // XRef Not Used

    {
        // CDirectSoundVoiceSettings_SetMixBinVolumes+0x09 : jbe +0x16
        { 0x09, 0x76 }, // (Offset,Value)-Pair #1
        { 0x0A, 0x16 }, // (Offset,Value)-Pair #2

        // CDirectSoundVoiceSettings_SetMixBinVolumes+0x18 : mov [ecx+edi*4+0x30], eax
        { 0x18, 0x89 }, // (Offset,Value)-Pair #3
        { 0x19, 0x44 }, // (Offset,Value)-Pair #4
        { 0x1A, 0xB9 }, // (Offset,Value)-Pair #5
        { 0x1B, 0x30 }, // (Offset,Value)-Pair #6

        // CDirectSoundVoiceSettings_SetMixBinVolumes+0x1E : jb +0xEC
        { 0x1E, 0x72 }, // (Offset,Value)-Pair #7
        { 0x1F, 0xEC }, // (Offset,Value)-Pair #8

        // CDirectSoundVoiceSettings_SetMixBinVolumes+0x22 : retn 0x04
        { 0x22, 0xC2 }, // (Offset,Value)-Pair #9
        { 0x23, 0x04 }, // (Offset,Value)-Pair #10
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetMixBinVolumes
// ******************************************************************
SOOVPA<17> CDirectSoundVoice_SetMixBinVolumes_1_0_4627 =
{
    0,  // Large == 0
    17, // Count == 17

    XREF_DSSETMIXBINVOLUMESB,	// XRef Is Saved
    1,                          // XRef Is Used

    {
        // CDirectSoundVoice_SetMixBinVolumes+0x0D : call [CDirectSoundVoiceSettings::SetMixBinVolumes]
        { 0x0D, XREF_DSSETMIXBINVOLUMESC }, // (Offset,Value)-Pair #1

		// CDirectSoundVoice_SetMixBinVolumes+0x01 : mov esi, [esp+8]
        { 0x01, 0x8B }, // (Offset,Value)-Pair #2
        { 0x02, 0x74 }, // (Offset,Value)-Pair #3
        { 0x03, 0x24 }, // (Offset,Value)-Pair #4
        { 0x04, 0x08 }, // (Offset,Value)-Pair #5

        // CDirectSoundVoice_SetMixBinVolumes+0x05 : push [esp+0x0C]
        { 0x05, 0xFF }, // (Offset,Value)-Pair #6
        { 0x06, 0x74 }, // (Offset,Value)-Pair #7
        { 0x07, 0x24 }, // (Offset,Value)-Pair #8
        { 0x08, 0x0C }, // (Offset,Value)-Pair #9

        // CDirectSoundVoice_SetMixBinVolumes+0x09 : mov ecx, [esi+0x10]
        { 0x09, 0x8B }, // (Offset,Value)-Pair #10
        { 0x0A, 0x4E }, // (Offset,Value)-Pair #11
        { 0x0B, 0x10 }, // (Offset,Value)-Pair #12

        // CDirectSoundVoice_SetMixBinVolumes+0x11 : mov ecx, [esi+0x0C]
        { 0x11, 0x8B }, // (Offset,Value)-Pair #13
        { 0x12, 0x4E }, // (Offset,Value)-Pair #14
        { 0x13, 0x0C }, // (Offset,Value)-Pair #15

        // CDirectSoundVoice_SetMixBinVolumes+0x1A : retn 0x08
        { 0x1A, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x1B, 0x08 }, // (Offset,Value)-Pair #17
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetMixBinVolumes
// ******************************************************************
SOOVPA<17> CDirectSoundBuffer_SetMixBinVolumes_1_0_4627 =
{
    0,  // Large == 0
    17, // Count == 17

    XREF_DSSETMIXBINVOLUMESA,	// XRef Is  Saved
    1,                          // XRef Not Used

    {
        // CDirectSoundBuffer_SetMixBinVolumes+0x32 : call [CDirectSoundVoice::SetMixBinVolumes]
        { 0x32, XREF_DSSETMIXBINVOLUMESB }, // (Offset,Value)-Pair #1

		// CDirectSoundBuffer_SetMixBinVolumes+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #2
        { 0x22, 0x05 }, // (Offset,Value)-Pair #3
        { 0x23, 0x40 }, // (Offset,Value)-Pair #4
        { 0x24, 0x00 }, // (Offset,Value)-Pair #5
        { 0x25, 0x80 }, // (Offset,Value)-Pair #6

        // CDirectSoundBuffer_SetMixBinVolumes+0x29 : push [esp+0x10]; push [esp+0x10]
        { 0x29, 0xFF }, // (Offset,Value)-Pair #7
        { 0x2A, 0x74 }, // (Offset,Value)-Pair #8
        { 0x2B, 0x24 }, // (Offset,Value)-Pair #9
        { 0x2C, 0x10 }, // (Offset,Value)-Pair #10
        { 0x2D, 0xFF }, // (Offset,Value)-Pair #11
        { 0x2E, 0x74 }, // (Offset,Value)-Pair #12
        { 0x2F, 0x24 }, // (Offset,Value)-Pair #13
        { 0x30, 0x10 }, // (Offset,Value)-Pair #14

        // CDirectSoundBuffer_SetMixBinVolumes+0x49 : pop edi
        { 0x49, 0x5F }, // (Offset,Value)-Pair #15

        // CDirectSoundBuffer_SetMixBinVolumes+0x4B : retn 0x08
        { 0x4B, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x4C, 0x08 }, // (Offset,Value)-Pair #17
    }
};

// ******************************************************************
// * IDirectSoundBuffer8_SetMixBinVolumes
// ******************************************************************
SOOVPA<12> IDirectSoundBuffer8_SetMixBinVolumes_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSoundBuffer8_SetMixBinVolumes+0x15 : call [CDirectSoundBuffer::SetMixBinVolumes]
        { 0x15, XREF_DSSETMIXBINVOLUMESA }, // (Offset,Value)-Pair #1

        // IDirectSoundBuffer8_SetMixBinVolumes+0x04 : push [esp+0x08]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSoundBuffer8_SetMixBinVolumes+0x0A : add eax, 0xFFFFFFE4
        { 0x0A, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0B, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x0C, 0xE4 }, // (Offset,Value)-Pair #8

        // IDirectSoundBuffer8_SetMixBinVolumes+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B }, // (Offset,Value)-Pair #9
        { 0x10, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSoundBuffer8_SetMixBinVolumes+0x11 : and ecx, eax
        { 0x11, 0x23 }, // (Offset,Value)-Pair #11
        { 0x12, 0xC8 }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * CDirectSound::SetPositionA
// ******************************************************************
SOOVPA<11> CDirectSound_SetPositionA_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_DSSETPOSITIONA,    // XRef Is  Saved
    0,                      // XRef Not Used

    {
        // CDirectSound_SetPositionA+0x2B : mov ecx, [ebp+0x08]
        { 0x2B, 0x8B }, // (Offset,Value)-Pair #1
        { 0x2C, 0x4D }, // (Offset,Value)-Pair #2
        { 0x2D, 0x08 }, // (Offset,Value)-Pair #3

        // CDirectSound_SetPositionA+0x3F : mov [edx+0x3C], edi
        { 0x3F, 0x89 }, // (Offset,Value)-Pair #4
        { 0x40, 0x7A }, // (Offset,Value)-Pair #5
        { 0x41, 0x3C }, // (Offset,Value)-Pair #6

        // CDirectSound_SetPositionA+0x4C : or word ptr [eax+0xA4], 0x01FF
        { 0x4C, 0x66 }, // (Offset,Value)-Pair #7
        { 0x4D, 0x81 }, // (Offset,Value)-Pair #8
        { 0x4E, 0x88 }, // (Offset,Value)-Pair #9
        { 0x4F, 0xA4 }, // (Offset,Value)-Pair #10
        { 0x53, 0xFF }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * DirectSoundCreateBuffer
// ******************************************************************
SOOVPA<12> DirectSoundCreateBuffer_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // DirectSoundCreateBuffer+0x2F : call [CDirectSound::CreateSoundBuffer]
        { 0x2F, XREF_DSCREATESOUNDBUFFER }, // (Offset,Value)-Pair #1

        // DirectSoundCreateBuffer+0x04 : and [ebp-0x04], 0
        { 0x04, 0x83 }, // (Offset,Value)-Pair #2
        { 0x05, 0x65 }, // (Offset,Value)-Pair #3
        { 0x06, 0xFC }, // (Offset,Value)-Pair #4

        // DirectSoundCreateBuffer+0x08 : push ebx; push esi; push edi
        { 0x08, 0x53 }, // (Offset,Value)-Pair #5
        { 0x09, 0x56 }, // (Offset,Value)-Pair #6
        { 0x0A, 0x57 }, // (Offset,Value)-Pair #7

        // DirectSoundCreateBuffer+0x3C : call dword ptr [eax+8]
        { 0x3C, 0xFF }, // (Offset,Value)-Pair #8
        { 0x3D, 0x50 }, // (Offset,Value)-Pair #9
        { 0x3E, 0x08 }, // (Offset,Value)-Pair #10

        // DirectSoundCreateBuffer+0x54 : retn 0x08
        { 0x54, 0xC2 }, // (Offset,Value)-Pair #11
        { 0x55, 0x08 }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * IDirectSound8_SetI3DL2Listener
// ******************************************************************
SOOVPA<12> IDirectSound8_SetI3DL2Listener_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSound8_SetI3DL2Listener+0x19 : call [CDirectSound::SetI3DL2Listener]
        { 0x19, XREF_DSSETI3DL2LISTENER }, // (Offset,Value)-Pair #1

        // IDirectSound8_SetI3DL2Listener+0x04 : push [esp+0x0C]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound8_SetI3DL2Listener+0x0E : add eax, 0xFFFFFFF8
        { 0x0E, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0F, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x10, 0xF8 }, // (Offset,Value)-Pair #8

        // IDirectSound8_SetI3DL2Listener+0x13 : sbb ecx, ecx
        { 0x13, 0x1B }, // (Offset,Value)-Pair #9
        { 0x14, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSound8_SetI3DL2Listener+0x15 : and ecx, eax
        { 0x15, 0x23 }, // (Offset,Value)-Pair #11
        { 0x16, 0xC8 }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * IDirectSound8_CreateSoundBuffer
// ******************************************************************
SOOVPA<12> IDirectSound8_CreateSoundBuffer_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSound8_CreateSoundBuffer+0x1D : call [CDirectSound::CreateSoundBuffer]
        { 0x1D, XREF_DSCREATESOUNDBUFFER }, // (Offset,Value)-Pair #1

        // IDirectSound8_CreateSoundBuffer+0x04 : mov eax, [esp+8]
        { 0x04, 0x8B }, // (Offset,Value)-Pair #2
        { 0x05, 0x44 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSound8_CreateSoundBuffer+0x12 : add eax, 0xFFFFFFF8
        { 0x12, 0x83 }, // (Offset,Value)-Pair #6
        { 0x13, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x14, 0xF8 }, // (Offset,Value)-Pair #8

        // IDirectSound8_CreateSoundBuffer+0x17 : sbb ecx, ecx
        { 0x17, 0x1B }, // (Offset,Value)-Pair #9
        { 0x18, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSound8_CreateSoundBuffer+0x21 : retn 0x10
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #11
        { 0x22, 0x10 }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetFrequency
// ******************************************************************
SOOVPA<11> CDirectSoundVoice_SetFrequency_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_DSBUFFERSETFREQUENCYB,	// XRef Is  Saved
    0,                          // XRef Not Used

    {
		// CDirectSoundVoice_SetFrequency+0x0D : mov eax, [esi+0x10]
        { 0x0D, 0x8B }, // (Offset,Value)-Pair #1
        { 0x0E, 0x46 }, // (Offset,Value)-Pair #2
        { 0x0F, 0x10 }, // (Offset,Value)-Pair #3

		// CDirectSoundVoice_SetFrequency+0x10 : mov eax, [eax+0x10]
        { 0x10, 0x8B }, // (Offset,Value)-Pair #4
        { 0x11, 0x40 }, // (Offset,Value)-Pair #5
        { 0x12, 0x10 }, // (Offset,Value)-Pair #6

        // CDirectSoundVoice_SetFrequency+0x14 : call [abs]; push eax; push esi
        { 0x14, 0xE8 }, // (Offset,Value)-Pair #7
        { 0x19, 0x50 }, // (Offset,Value)-Pair #8
        { 0x1A, 0x56 }, // (Offset,Value)-Pair #9

        // CDirectSoundVoice_SetFrequency+0x22 : retn 0x08
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x22, 0x08 }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetFrequency
// ******************************************************************
SOOVPA<17> CDirectSoundBuffer_SetFrequency_1_0_4627 =
{
    0,  // Large == 0
    17, // Count == 17

    XREF_DSBUFFERSETFREQUENCYA,	// XRef Is Saved
    1,                          // XRef Is Used

    {
        // CDirectSoundBuffer_SetFrequency+0x32 : call [CDirectSoundVoice::SetFrequency]
        { 0x32, XREF_DSBUFFERSETFREQUENCYB }, // (Offset,Value)-Pair #1

		// CDirectSoundBuffer_SetFrequency+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #2
        { 0x22, 0x05 }, // (Offset,Value)-Pair #3
        { 0x23, 0x40 }, // (Offset,Value)-Pair #4
        { 0x24, 0x00 }, // (Offset,Value)-Pair #5
        { 0x25, 0x80 }, // (Offset,Value)-Pair #6

        // CDirectSoundBuffer_SetFrequency+0x29 : push [esp+0x10]; push [esp+0x10]
        { 0x29, 0xFF }, // (Offset,Value)-Pair #7
        { 0x2A, 0x74 }, // (Offset,Value)-Pair #8
        { 0x2B, 0x24 }, // (Offset,Value)-Pair #9
        { 0x2C, 0x10 }, // (Offset,Value)-Pair #10
        { 0x2D, 0xFF }, // (Offset,Value)-Pair #11
        { 0x2E, 0x74 }, // (Offset,Value)-Pair #12
        { 0x2F, 0x24 }, // (Offset,Value)-Pair #13
        { 0x30, 0x10 }, // (Offset,Value)-Pair #14

        // CDirectSoundBuffer_SetFrequency+0x49 : pop edi
        { 0x49, 0x5F }, // (Offset,Value)-Pair #15

        // CDirectSoundBuffer_SetFrequency+0x4B : retn 0x08
        { 0x4B, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x4C, 0x08 }, // (Offset,Value)-Pair #17
    }
};

// ******************************************************************
// * IDirectSoundBuffer8_SetFrequency
// ******************************************************************
SOOVPA<12> IDirectSoundBuffer8_SetFrequency_1_0_4627 =
{
    0,  // Large == 0
    12, // Count == 12

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSoundBuffer8_SetFrequency+0x15 : call [CDirectSound::SetFrequency]
        { 0x15, XREF_DSBUFFERSETFREQUENCYA }, // (Offset,Value)-Pair #1

        // IDirectSoundBuffer8_SetFrequency+0x04 : push [esp+0x08]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSoundBuffer8_SetFrequency0x0A : add eax, 0xFFFFFFE4
        { 0x0A, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0B, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x0C, 0xE4 }, // (Offset,Value)-Pair #8

        // IDirectSoundBuffer8_SetFrequency+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B }, // (Offset,Value)-Pair #9
        { 0x10, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSoundBuffer8_SetFrequency+0x11 : and ecx, eax
        { 0x11, 0x23 }, // (Offset,Value)-Pair #11
        { 0x12, 0xC8 }, // (Offset,Value)-Pair #12
    }
};

// ******************************************************************
// * CMcpxVoiceClient_SetVolume
// ******************************************************************
SOOVPA<13> CMcpxVoiceClient_SetVolume_1_0_4361 =
{
    0,  // Large == 0
    13, // Count == 13

    XREF_DSSTREAMSETVOLUME, // XRef Is  Saved
    0,                      // XRef Not Used

    {
        // CMcpxVoiceClient_SetVolume+0x2A : lea eax, [ecx+ecx*2]
        { 0x2A, 0x8D }, // (Offset,Value)-Pair #1
        { 0x2B, 0x04 }, // (Offset,Value)-Pair #2
        { 0x2C, 0x49 }, // (Offset,Value)-Pair #3

        // CMcpxVoiceClient_SetVolume+0x45 : movzx edx, word ptr [ecx]
        { 0x45, 0x0F }, // (Offset,Value)-Pair #4
        { 0x46, 0xB7 }, // (Offset,Value)-Pair #5
        { 0x47, 0x11 }, // (Offset,Value)-Pair #6

        // CMcpxVoiceClient_SetVolume+0x6C : mov edx, [ebp+eax*4-0x14]
        { 0x6C, 0x8B }, // (Offset,Value)-Pair #7
        { 0x6D, 0x54 }, // (Offset,Value)-Pair #8
        { 0x6E, 0x85 }, // (Offset,Value)-Pair #9
        { 0x6F, 0xEC }, // (Offset,Value)-Pair #10

        // CMcpxVoiceClient_SetVolume+0x84 : inc eax; inc ecx, inc ecx
        { 0x84, 0x40 }, // (Offset,Value)-Pair #11
        { 0x85, 0x41 }, // (Offset,Value)-Pair #12
        { 0x86, 0x41 }, // (Offset,Value)-Pair #13
    }
};

// ******************************************************************
// * CDirectSoundStream_SetVolume
// ******************************************************************
SOOVPA<11> CDirectSoundStream_SetVolume_1_0_4361 =
{
    0,  // Large == 0
    11, // Count == 11

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // CDirectSoundStream_SetVolume+0x15 : call [CMcpxVoiceClient::SetVolume]
        { 0x15, XREF_DSSTREAMSETVOLUME },  // (Offset,Value)-Pair #1

        // CDirectSoundStream_SetVolume+0x00 : mov ecx, [esp+0x04]
        { 0x00, 0x8B }, // (Offset,Value)-Pair #2
        { 0x01, 0x4C }, // (Offset,Value)-Pair #3
        { 0x02, 0x24 }, // (Offset,Value)-Pair #4
        { 0x03, 0x04 }, // (Offset,Value)-Pair #5

        // CDirectSoundStream_SetVolume+0x0B : sub edx, [eax+0x20]
        { 0x0B, 0x2B }, // (Offset,Value)-Pair #6
        { 0x0C, 0x50 }, // (Offset,Value)-Pair #7
        { 0x0D, 0x20 }, // (Offset,Value)-Pair #8

        // CDirectSoundStream_SetVolume+0x11 : mov ecx, [ecx+0x0C]
        { 0x11, 0x8B }, // (Offset,Value)-Pair #9
        { 0x12, 0x49 }, // (Offset,Value)-Pair #10
        { 0x13, 0x0C }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * IDirectSoundBuffer8_LockA
// ******************************************************************
SOOVPA<13> IDirectSoundBuffer8_LockA_1_0_4627 =
{
    0, // Large == 0
    13,// Count == 10

    XREF_DSBUFFERLOCKA, // XRef Is  Saved
    0,                  // XRef Not Used

    {
        // IDirectSoundBuffer8_LockA+0x37 : test [ebp+0x24], 1
        { 0x37, 0xF6 }, // (Offset,Value)-Pair #1
        { 0x38, 0x45 }, // (Offset,Value)-Pair #2
        { 0x39, 0x24 }, // (Offset,Value)-Pair #3
        { 0x3A, 0x01 }, // (Offset,Value)-Pair #4

        // IDirectSoundBuffer8_LockA+0x5C : mov eax, [eax+0xBC]
        { 0x5C, 0x8B }, // (Offset,Value)-Pair #5
        { 0x5D, 0x80 }, // (Offset,Value)-Pair #6
        { 0x5E, 0xBC }, // (Offset,Value)-Pair #7
        { 0x5F, 0x00 }, // (Offset,Value)-Pair #8

        // IDirectSoundBuffer8_LockA+0xA4 : jnb +0x11; mov esi, [esi+0x1C]
        { 0xA2, 0x73 }, // (Offset,Value)-Pair #9
        { 0xA3, 0x11 }, // (Offset,Value)-Pair #10
        { 0xA4, 0x8B }, // (Offset,Value)-Pair #11
        { 0xA5, 0x76 }, // (Offset,Value)-Pair #12
        { 0xA6, 0x1C }, // (Offset,Value)-Pair #13
    }
};

// ******************************************************************
// * CMcpxBuffer_GetStatus
// ******************************************************************
SOOVPA<11> CMcpxBuffer_GetStatus_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_DSBUFFERGETSTATUSA,    // XRef Is  Saved
    0,                          // XRef Not Used

    {
        // CMcpxBuffer_GetStatus+0x0A : mov esi, ecx
        { 0x0A, 0x8B }, // (Offset,Value)-Pair #1
        { 0x0B, 0xF1 }, // (Offset,Value)-Pair #2

        // CMcpxBuffer_GetStatus+0x20 : jz +0x18
        { 0x20, 0x74 }, // (Offset,Value)-Pair #3
        { 0x21, 0x18 }, // (Offset,Value)-Pair #4

        // CMcpxBuffer_GetStatus+0x22 : test word ptr [esi+0x12], 0x8002
        { 0x22, 0x66 }, // (Offset,Value)-Pair #5
        { 0x23, 0xF7 }, // (Offset,Value)-Pair #6
        { 0x24, 0x46 }, // (Offset,Value)-Pair #7
        { 0x25, 0x12 }, // (Offset,Value)-Pair #8

        // CMcpxBuffer_GetStatus+0x2C : test word ptr [esi+0x12], 0x200
        { 0x2C, 0x66 }, // (Offset,Value)-Pair #9
        { 0x2D, 0xF7 }, // (Offset,Value)-Pair #10
        { 0x2E, 0x46 }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * CDirectSoundBuffer_GetStatus
// ******************************************************************
SOOVPA<10> CDirectSoundBuffer_GetStatus_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSBUFFERGETSTATUSB,    // XRef Is Saved
    1,                          // XRef Is  Used

    {
        // CDirectSoundBuffer_GetStatus+0x35 : call [CMcpxBuffer::GetStatus]
        { 0x35, XREF_DSBUFFERGETSTATUSA },  // (Offset,Value)-Pair #1

        // CDirectSoundBuffer_GetStatus+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #2
        { 0x22, 0x05 }, // (Offset,Value)-Pair #3
        { 0x23, 0x40 }, // (Offset,Value)-Pair #4
        { 0x24, 0x00 }, // (Offset,Value)-Pair #5
        { 0x25, 0x80 }, // (Offset,Value)-Pair #6

        // CDirectSoundBuffer_GetStatus+0x3D : jz +0x0B
        { 0x3D, 0x74 }, // (Offset,Value)-Pair #7
        { 0x3E, 0x0B }, // (Offset,Value)-Pair #8

        // CDirectSoundBuffer_GetStatus+0x4E : retn 0x08
        { 0x4E, 0xC2 }, // (Offset,Value)-Pair #9
        { 0x4F, 0x08 }, // (Offset,Value)-Pair #10
    }
};

// ******************************************************************
// * IDirectSoundBuffer8_GetStatus
// ******************************************************************
SOOVPA<9> IDirectSoundBuffer8_GetStatus_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSoundBuffer8_GetStatus+0x15 : call [CDirectSoundBuffer::GetStatus]
        { 0x15, XREF_DSBUFFERGETSTATUSB },  // (Offset,Value)-Pair #1

        // IDirectSoundBuffer8_GetStatus+0x04 : push [esp+0x08]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSoundBuffer8_GetStatus+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B }, // (Offset,Value)-Pair #6
        { 0x10, 0xC9 }, // (Offset,Value)-Pair #7

        // IDirectSoundBuffer8_GetStatus+0x11 : and ecx, eax
        { 0x11, 0x23 }, // (Offset,Value)-Pair #8
        { 0x12, 0xC8 }, // (Offset,Value)-Pair #9
    }
};

// ******************************************************************
// * CDirectSound::SetDistanceFactorA
// ******************************************************************
SOOVPA<11> CDirectSound_SetDistanceFactorA_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_SETDISTANCEFACTORA,// XRef Is Saved
    0,                      // XRef Not Used

    {
        // CDirectSound_SetDistanceFactorA+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // CDirectSound_SetDistanceFactorA+0x39 : or byte ptr[eax+0xA4], 0xE0
        { 0x39, 0x80 }, // (Offset,Value)-Pair #6
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #7
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #8
        { 0x3F, 0xE0 }, // (Offset,Value)-Pair #9

        // CDirectSound_SetDistanceFactorA+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #10
        { 0x50, 0x0B }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * IDirectSound8_SetDistanceFactor
// ******************************************************************
SOOVPA<11> IDirectSound8_SetDistanceFactor_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSound8_SetDistanceFactor+0x1D : call [CDirectSound::SetDistanceFactor]
        { 0x1D, XREF_SETDISTANCEFACTORA },  // (Offset,Value)-Pair #1

        // IDirectSound8_SetDistanceFactor+0x04 : fld [esp+0x0C]
        { 0x04, 0xD9 }, // (Offset,Value)-Pair #2
        { 0x05, 0x44 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound8_SetDistanceFactor+0x0C : push ecx
        { 0x0C, 0x51 }, // (Offset,Value)-Pair #6

        // IDirectSound8_SetDistanceFactor+0x12 : add eax, 0xFFFFFFF8
        { 0x12, 0x83 }, // (Offset,Value)-Pair #7
        { 0x13, 0xC0 }, // (Offset,Value)-Pair #8
        { 0x14, 0xF8 }, // (Offset,Value)-Pair #9

        // IDirectSound8_SetDistanceFactor+0x21 : retn 0x0C
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x22, 0x0C }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * CDirectSound::SetRolloffFactor
// ******************************************************************
SOOVPA<11> CDirectSound_SetRolloffFactor_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_SETROLLOFFFACTORA, // XRef Is Saved
    0,                      // XRef Not Used

    {
        // CDirectSound_SetRolloffFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // CDirectSound_SetRolloffFactor+0x39 : or dword ptr[eax+0xA4], 0x04
        { 0x39, 0x83 }, // (Offset,Value)-Pair #6
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #7
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #8
        { 0x3F, 0x04 }, // (Offset,Value)-Pair #9

        // CDirectSound_SetRolloffFactor+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #10
        { 0x50, 0x0B }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * IDirectSound8_SetRolloffFactor
// ******************************************************************
SOOVPA<11> IDirectSound8_SetRolloffFactor_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSound8_SetRolloffFactor+0x1D : call [CDirectSound::SetRolloffFactor]
        { 0x1D, XREF_SETROLLOFFFACTORA },  // (Offset,Value)-Pair #1

        // IDirectSound8_SetRolloffFactor+0x04 : fld [esp+0x0C]
        { 0x04, 0xD9 }, // (Offset,Value)-Pair #2
        { 0x05, 0x44 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound8_SetRolloffFactor+0x0C : push ecx
        { 0x0C, 0x51 }, // (Offset,Value)-Pair #6

        // IDirectSound8_SetRolloffFactor+0x12 : add eax, 0xFFFFFFF8
        { 0x12, 0x83 }, // (Offset,Value)-Pair #7
        { 0x13, 0xC0 }, // (Offset,Value)-Pair #8
        { 0x14, 0xF8 }, // (Offset,Value)-Pair #9

        // IDirectSound8_SetRolloffFactor+0x21 : retn 0x0C
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x22, 0x0C }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * CDirectSound::SetDopplerFactor
// ******************************************************************
SOOVPA<14> CDirectSound_SetDopplerFactor_1_0_4627 =
{
    0,  // Large == 0
    14, // Count == 14

    XREF_SETDOPPLERFACTOR,  // XRef Is Saved
    0,                      // XRef Not Used

    {
        // CDirectSound_SetDopplerFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // CDirectSound_SetDopplerFactor+0x33 : mov [eax+0x70], edx
        { 0x33, 0x89 }, // (Offset,Value)-Pair #6
        { 0x34, 0x50 }, // (Offset,Value)-Pair #7
        { 0x35, 0x70 }, // (Offset,Value)-Pair #8

        // CDirectSound_SetDopplerFactor+0x39 : or byte ptr[eax+0xA4], 0x80
        { 0x39, 0x80 }, // (Offset,Value)-Pair #9
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #10
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #11
        { 0x3F, 0x80 }, // (Offset,Value)-Pair #12

        // CDirectSound_SetDopplerFactor+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #13
        { 0x50, 0x0B }, // (Offset,Value)-Pair #14
    }
};

// ******************************************************************
// * IDirectSound8_SetDopplerFactor
// ******************************************************************
SOOVPA<11> IDirectSound8_SetDopplerFactor_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    -1, // XRef Not Saved
    1,  // XRef Is  Used

    {
        // IDirectSound8_SetDopplerFactor+0x1D : call [CDirectSound::SetDopplerFactor]
        { 0x1D, XREF_SETDOPPLERFACTOR},  // (Offset,Value)-Pair #1

        // IDirectSound8_SetDopplerFactor+0x04 : fld [esp+0x0C]
        { 0x04, 0xD9 }, // (Offset,Value)-Pair #2
        { 0x05, 0x44 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound8_SetDopplerFactor+0x0C : push ecx
        { 0x0C, 0x51 }, // (Offset,Value)-Pair #6

        // IDirectSound8_SetDopplerFactor+0x12 : add eax, 0xFFFFFFF8
        { 0x12, 0x83 }, // (Offset,Value)-Pair #7
        { 0x13, 0xC0 }, // (Offset,Value)-Pair #8
        { 0x14, 0xF8 }, // (Offset,Value)-Pair #9

        // IDirectSound8_SetDopplerFactor+0x21 : retn 0x0C
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x22, 0x0C }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * CDirectSound::CommitDeferredSettings
// ******************************************************************
SOOVPA<11> CDirectSound_CommitDeferredSettings_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    -1, // XRef Not Saved
    0,  // XRef Not Used

    {
        // CDirectSound_CommitDeferredSettings+0x10 : movzx eax, al
        { 0x10, 0x0F }, // (Offset,Value)-Pair #1
        { 0x11, 0xB6 }, // (Offset,Value)-Pair #2
        { 0x12, 0xC0 }, // (Offset,Value)-Pair #3

        // CDirectSound_CommitDeferredSettings+0x27 : mov eax, 0x80004005
        { 0x27, 0xB8 }, // (Offset,Value)-Pair #4
        { 0x28, 0x05 }, // (Offset,Value)-Pair #5
        { 0x29, 0x40 }, // (Offset,Value)-Pair #6
        { 0x2B, 0x80 }, // (Offset,Value)-Pair #7

        // CDirectSound_CommitDeferredSettings+0x5C : and [eax+0xA4], esi
        { 0x5C, 0x21 }, // (Offset,Value)-Pair #8
        { 0x5D, 0xB0 }, // (Offset,Value)-Pair #9
        { 0x5E, 0xA4 }, // (Offset,Value)-Pair #10

        // CDirectSound_CommitDeferredSettings+0x78 : leave
        { 0x78, 0xC9 }, // (Offset,Value)-Pair #11
    }
};

// s+
// ******************************************************************
// * CDirectSoundVoice::SetMaxDistance
// ******************************************************************
SOOVPA<9> CDirectSoundVoice_SetMaxDistance_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    XREF_DSVOICESETMAXDISTANCE, // XRef Is Saved
    0,                          // XRef Not Used

    {
        // CDirectSoundVoice_SetMaxDistance+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetMaxDistance+0x11 : mov [eax+38h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x38 },

        // CDirectSoundVoice_SetMaxDistance+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetMaxDistance
// ******************************************************************
SOOVPA<10> CDirectSoundBuffer_SetMaxDistance_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSBUFFERSETMAXDISTANCE, // XRef Is Saved
    1,                           // XRef Is Used

    {
        // CDirectSoundBuffer_SetMaxDistance+0x39 : call [CDirectSoundVoice::SetMaxDistance]
        { 0x3A, XREF_DSVOICESETMAXDISTANCE },

        // CDirectSoundBuffer_SetMaxDistance+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSoundBuffer_SetMaxDistance+0x32 : fstp    [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // CDirectSoundBuffer_SetMaxDistance+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetMaxDistance
// ******************************************************************
SOOVPA<10> IDirectSoundBuffer_SetMaxDistance_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetMaxDistance+0x1C : call [CDirectSoundBuffer::SetMaxDistance]
        { 0x1D, XREF_DSBUFFERSETMAXDISTANCE },

        // IDirectSoundBuffer_SetMaxDistance+0x04 : fld [esp+4+arg_4]
        { 0x04, 0xD9 },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetMaxDistance+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetMaxDistance+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetMinDistance
// ******************************************************************
SOOVPA<9> CDirectSoundVoice_SetMinDistance_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    XREF_DSVOICESETMINDISTANCE, // XRef Is Saved
    0,                          // XRef Not Used

    {
        // CDirectSoundVoice_SetMinDistance+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetMinDistance+0x11 : mov [eax+34h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x34 },

        // CDirectSoundVoice_SetMinDistance+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetMinDistance
// ******************************************************************
SOOVPA<10> CDirectSoundBuffer_SetMinDistance_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSBUFFERSETMINDISTANCE, // XRef Is Saved
    1,                           // XRef Is Used

    {
        // CDirectSoundBuffer_SetMinDistance+0x39 : call [CDirectSoundVoice::SetMinDistance]
        { 0x3A, XREF_DSVOICESETMINDISTANCE },

        // CDirectSoundBuffer_SetMinDistance+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSoundBuffer_SetMinDistance+0x32 : fstp    [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // CDirectSoundBuffer_SetMinDistance+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetMinDistance
// ******************************************************************
SOOVPA<10> IDirectSoundBuffer_SetMinDistance_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetMinDistance+0x1C : call [CDirectSoundBuffer::SetMinDistance]
        { 0x1D, XREF_DSBUFFERSETMINDISTANCE },

        // IDirectSoundBuffer_SetMinDistance+0x04 : fld [esp+4+arg_4]
        { 0x04, 0xD9 },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetMinDistance+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetMinDistance+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetRolloffFactor
// ******************************************************************
SOOVPA<9> CDirectSoundVoice_SetRolloffFactor_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    XREF_DSVOICESETROLLOFFFACTOR, // XRef Is Saved
    0,                            // XRef Not Used

    {
        // CDirectSoundVoice_SetRolloffFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetRolloffFactor+0x11 : mov [eax+44h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x44 },

        // CDirectSoundVoice_SetRolloffFactor+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetRolloffFactor
// ******************************************************************
SOOVPA<10> CDirectSoundBuffer_SetRolloffFactor_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSBUFFERSETROLLOFFFACTOR, // XRef Is Saved
    1,                             // XRef Is Used

    {
        // CDirectSoundBuffer_SetRolloffFactor+0x39 : call [CDirectSoundVoice::SetRolloffFactor]
        { 0x3A, XREF_DSVOICESETROLLOFFFACTOR },

        // CDirectSoundBuffer_SetRolloffFactor+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSoundBuffer_SetRolloffFactor+0x32 : fstp    [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // CDirectSoundBuffer_SetRolloffFactor+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetRolloffFactor
// ******************************************************************
SOOVPA<10> IDirectSoundBuffer_SetRolloffFactor_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetRolloffFactor+0x1C : call [CDirectSoundBuffer::SetRolloffFactor]
        { 0x1D, XREF_DSBUFFERSETROLLOFFFACTOR },

        // IDirectSoundBuffer_SetRolloffFactor+0x04 : fld [esp+4+arg_4]
        { 0x04, 0xD9 },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetRolloffFactor+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetRolloffFactor+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetDistanceFactor
// ******************************************************************
SOOVPA<9> CDirectSoundVoice_SetDistanceFactor_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    XREF_DSVOICESETDISTANCEFACTOR, // XRef Is Saved
    0,                             // XRef Not Used

    {
        // CDirectSoundVoice_SetDistanceFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetDistanceFactor+0x11 : mov [eax+40h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x40 },

        // CDirectSoundVoice_SetDistanceFactor+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetDistanceFactor
// ******************************************************************
SOOVPA<10> CDirectSoundBuffer_SetDistanceFactor_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSBUFFERSETDISTANCEFACTOR, // XRef Is Saved
    1,                              // XRef Is Used

    {
        // CDirectSoundBuffer_SetDistanceFactor+0x39 : call [CDirectSoundVoice::SetDistanceFactor]
        { 0x3A, XREF_DSVOICESETDISTANCEFACTOR },

        // CDirectSoundBuffer_SetDistanceFactor+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSoundBuffer_SetDistanceFactor+0x32 : fstp    [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // CDirectSoundBuffer_SetDistanceFactor+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetDistanceFactor
// ******************************************************************
SOOVPA<10> IDirectSoundBuffer_SetDistanceFactor_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetDistanceFactor+0x1C : call [CDirectSoundBuffer::SetDistanceFactor]
        { 0x1D, XREF_DSBUFFERSETDISTANCEFACTOR },

        // IDirectSoundBuffer_SetDistanceFactor+0x04 : fld [esp+4+arg_4]
        { 0x04, 0xD9 },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetDistanceFactor+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetSetDistanceFactor+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetConeAngles
// ******************************************************************
SOOVPA<9> CDirectSoundVoice_SetConeAngles_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    XREF_DSVOICESETCONEANGLES, // XRef Is Saved
    0,                         // XRef Not Used

    {
        // CDirectSoundVoice_SetConeAngles+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetConeAngles+0x11 : mov [ecx+1Ch], edx
        { 0x11, 0x89 },
        { 0x12, 0x51 },
        { 0x13, 0x1C },

        // CDirectSoundVoice_SetConeAngles+0x40 : retn 10h
        { 0x41, 0x10 },
        { 0x42, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetConeAngles
// ******************************************************************
SOOVPA<11> CDirectSoundBuffer_SetConeAngles_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_DSBUFFERSETCONEANGLES, // XRef Is Saved
    1,                          // XRef Is Used

    {
        // CDirectSoundBuffer_SetConeAngles+0x39 : call [CDirectSoundVoice::SetConeAngles]
        { 0x3A, XREF_DSVOICESETCONEANGLES },

        // CDirectSoundBuffer_SetConeAngles+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSoundBuffer_SetConeAngles+0x31 : push [esp+0Ch+arg_4]
        { 0x31, 0xFF },
        { 0x32, 0x74 },
        { 0x33, 0x24 },
        { 0x34, 0x18 },

        // CDirectSoundBuffer_SetConeAngles+0x53 : retn 10h
        { 0x54, 0x10 },
        { 0x55, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetConeAngles
// ******************************************************************
SOOVPA<10> IDirectSoundBuffer_SetConeAngles_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetConeAngles+0x1C : call [CDirectSoundBuffer::SetConeAngles]
        { 0x1D, XREF_DSBUFFERSETCONEANGLES },

        // IDirectSoundBuffer_SetConeAngles+0x04 : mov eax, [esp+4+arg_0]
        { 0x04, 0x8B },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x08 },

        // IDirectSoundBuffer_SetConeAngles+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetConeAngles+0x21 : retn 10h
        { 0x22, 0x10 },
        { 0x23, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetConeOrientation
// ******************************************************************
SOOVPA<8> CDirectSoundVoice_SetConeOrientation_1_0_4627 =
{
    0,  // Large == 0
    8,  // Count == 8

    XREF_DSVOICESETCONEORIENTATION, // XRef Is Saved
    0,                              // XRef Not Used

    {
        // CDirectSoundVoice_SetConeOrientation+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // CDirectSoundVoice_SetConeOrientation+0x12 : mov [ecx+24h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x24 },

        // CDirectSoundVoice_SetConeOrientation+0x4F : retn 14h
        { 0x50, 0x14 },
        { 0x51, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetConeOrientation
// ******************************************************************
SOOVPA<9> CDirectSoundBuffer_SetConeOrientation_1_0_4627 =
{
    0, // Large == 0
    9, // Count == 9

    XREF_DSBUFFERSETCONEORIENTATION, // XRef Is Saved
    1,                               // XRef Is Used

    {
        // CDirectSoundBuffer_SetConeOrientation+0x49 : call [CDirectSoundVoice::SetConeOrientation]
        { 0x4A, XREF_DSVOICESETCONEORIENTATION },

        // CDirectSoundBuffer_SetConeOrientation+0x2B : fld [ebp+arg_C]
        { 0x2B, 0xD9 },
        { 0x2C, 0x45 },
        { 0x2D, 0x14 },

        // CDirectSoundBuffer_SetConeOrientation+0x43 : fstp [esp+18h+var_18]
        { 0x43, 0xD9 },
        { 0x44, 0x1C },
        { 0x45, 0x24 },

        // CDirectSoundBuffer_SetConeOrientation+0x64 : retn 14h
        { 0x65, 0x14 },
        { 0x66, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetConeOrientation
// ******************************************************************
SOOVPA<9> IDirectSoundBuffer_SetConeOrientation_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetConeOrientation+0x2C : call [CDirectSoundBuffer::SetConeOrientation]
        { 0x2D, XREF_DSBUFFERSETCONEORIENTATION },

        // IDirectSoundBuffer_SetConeOrientation+0x06 : fld [ebp+arg_C]
        { 0x06, 0xD9 },
        { 0x07, 0x45 },
        { 0x08, 0x14 },

        // IDirectSoundBuffer_SetConeOrientation+0x28 : fstp [esp+10h+var_10]
        { 0x28, 0xD9 },
        { 0x29, 0x1C },
        { 0x2A, 0x24 },

        // IDirectSoundBuffer_SetConeOrientation+0x32 : retn 14h
        { 0x33, 0x14 },
        { 0x34, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetConeOutsideVolume
// ******************************************************************
SOOVPA<9> CDirectSoundVoice_SetConeOutsideVolume_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    XREF_DSVOICESETCONEOUTSIDEVOLUME, // XRef Is Saved
    0,                                // XRef Not Used

    {
        // CDirectSoundVoice_SetConeOutsideVolume+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetConeOutsideVolume+0x11 : mov [eax+30h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x30 },

        // CDirectSoundVoice_SetConeOutsideVolume+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetConeOutsideVolume
// ******************************************************************
SOOVPA<11> CDirectSoundBuffer_SetConeOutsideVolume_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_DSBUFFERSETCONEOUTSIDEVOLUME, // XRef Is Saved
    1,                                 // XRef Is Used

    {
        // CDirectSoundBuffer_SetConeOutsideVolume+0x35 : call [CDirectSoundVoice::SetConeOutsideVolume]
        { 0x36, XREF_DSVOICESETCONEOUTSIDEVOLUME },

        // CDirectSoundBuffer_SetConeOutsideVolume+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSoundBuffer_SetConeOutsideVolume+0x31 : push [esp+0Ch+arg_0]
        { 0x31, 0xFF },
        { 0x32, 0x74 },
        { 0x33, 0x24 },
        { 0x34, 0x14 },

        // CDirectSoundBuffer_SetConeOutsideVolume+0x4F : retn 0Ch
        { 0x50, 0x0C },
        { 0x51, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetConeOutsideVolume
// ******************************************************************
SOOVPA<9> IDirectSoundBuffer_SetConeOutsideVolume_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetConeOutsideVolume+0x18 : call [CDirectSoundBuffer::SetConeOutsideVolume]
        { 0x19, XREF_DSBUFFERSETCONEOUTSIDEVOLUME },

        // IDirectSoundBuffer_SetConeOutsideVolume+0x0A : push [esp+4+arg_4]
        { 0x0A, 0xFF },
        { 0x0B, 0x74 },
        { 0x0C, 0x24 },
        { 0x0D, 0x0C },

        // IDirectSoundBuffer_SetConeOutsideVolume+0x15 : and ecx, eax
        { 0x15, 0x23 },
        { 0x16, 0xC8 },

        // IDirectSoundBuffer_SetConeOutsideVolume+0x1D : retn 0Ch
        { 0x1E, 0x0C },
        { 0x1F, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetPosition
// ******************************************************************
SOOVPA<8> CDirectSoundVoice_SetPosition_1_0_4627 =
{
    0,  // Large == 0
    8,  // Count == 8

    XREF_DSVOICESETPOSITION, // XRef Is Saved
    0,                       // XRef Not Used

    {
        // CDirectSoundVoice_SetPosition+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // CDirectSoundVoice_SetPosition+0x12 : mov [ecx+04h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x04 },

        // CDirectSoundVoice_SetPosition+0x51 : retn 14h
        { 0x52, 0x14 },
        { 0x53, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetPosition
// ******************************************************************
SOOVPA<9> CDirectSoundBuffer_SetPosition_1_0_4627 =
{
    0, // Large == 0
    9, // Count == 9

    XREF_DSBUFFERSETPOSITION, // XRef Is Saved
    1,                        // XRef Is Used

    {
        // CDirectSoundBuffer_SetPosition+0x49 : call [CDirectSoundVoice::SetPosition]
        { 0x4A, XREF_DSVOICESETPOSITION },

        // CDirectSoundBuffer_SetPosition+0x2B : fld [ebp+arg_C]
        { 0x2B, 0xD9 },
        { 0x2C, 0x45 },
        { 0x2D, 0x14 },

        // CDirectSoundBuffer_SetPosition+0x43 : fstp [esp+18h+var_18]
        { 0x43, 0xD9 },
        { 0x44, 0x1C },
        { 0x45, 0x24 },

        // CDirectSoundBuffer_SetPosition+0x64 : retn 14h
        { 0x65, 0x14 },
        { 0x66, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetPosition
// ******************************************************************
SOOVPA<9> IDirectSoundBuffer_SetPosition_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetPosition+0x2C : call [CDirectSoundBuffer::SetPosition]
        { 0x2D, XREF_DSBUFFERSETPOSITION },

        // IDirectSoundBuffer_SetPosition+0x09 : mov eax, [ebp+arg_0]
        { 0x09, 0x8B },
        { 0x0A, 0x45 },
        { 0x0B, 0x08 },

        // IDirectSoundBuffer_SetPosition+0x28 : fstp [esp+10h+var_10]
        { 0x28, 0xD9 },
        { 0x29, 0x1C },
        { 0x2A, 0x24 },

        // IDirectSoundBuffer_SetPosition+0x32 : retn 14h
        { 0x33, 0x14 },
        { 0x34, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetVelocity
// ******************************************************************
SOOVPA<8> CDirectSoundVoice_SetVelocity_1_0_4627 =
{
    0,  // Large == 0
    8,  // Count == 8

    XREF_DSVOICESETVELOCITY, // XRef Is Saved
    0,                       // XRef Not Used

    {
        // CDirectSoundVoice_SetVelocity+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // CDirectSoundVoice_SetVelocity+0x12 : mov [ecx+10h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x10 },

        // CDirectSoundVoice_SetVelocity+0x4F : retn 14h
        { 0x50, 0x14 },
        { 0x51, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetVelocity
// ******************************************************************
SOOVPA<9> CDirectSoundBuffer_SetVelocity_1_0_4627 =
{
    0, // Large == 0
    9, // Count == 9

    XREF_DSBUFFERSETVELOCITY, // XRef Is Saved
    1,                        // XRef Is Used

    {
        // CDirectSoundBuffer_SetVelocity+0x49 : call [CDirectSoundVoice::SetVelocity]
        { 0x4A, XREF_DSVOICESETVELOCITY },

        // CDirectSoundBuffer_SetVelocity+0x2B : fld [ebp+arg_C]
        { 0x2B, 0xD9 },
        { 0x2C, 0x45 },
        { 0x2D, 0x14 },

        // CDirectSoundBuffer_SetVelocity+0x43 : fstp [esp+18h+var_18]
        { 0x43, 0xD9 },
        { 0x44, 0x1C },
        { 0x45, 0x24 },

        // CDirectSoundBuffer_SetVelocity+0x64 : retn 14h
        { 0x65, 0x14 },
        { 0x66, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetVelocity
// ******************************************************************
SOOVPA<9> IDirectSoundBuffer_SetVelocity_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetVelocity+0x2C : call [CDirectSoundBuffer::SetVelocity]
        { 0x2D, XREF_DSBUFFERSETVELOCITY },

        // IDirectSoundBuffer_SetVelocity+0x09 : mov eax, [ebp+arg_0]
        { 0x09, 0x8B },
        { 0x0A, 0x45 },
        { 0x0B, 0x08 },

        // IDirectSoundBuffer_SetVelocity+0x28 : fstp [esp+10h+var_10]
        { 0x28, 0xD9 },
        { 0x29, 0x1C },
        { 0x2A, 0x24 },

        // IDirectSoundBuffer_SetVelocity+0x32 : retn 14h
        { 0x33, 0x14 },
        { 0x34, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetDopplerFactor
// ******************************************************************
SOOVPA<9> CDirectSoundVoice_SetDopplerFactor_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    XREF_DSVOICESETDOPPLERFACTOR, // XRef Is Saved
    0,                            // XRef Not Used

    {
        // CDirectSoundVoice_SetDopplerFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetDopplerFactor+0x12 : mov [eax+48h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x48 },

        // CDirectSoundVoice_SetDopplerFactor+0x31 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetDopplerFactor
// ******************************************************************
SOOVPA<10> CDirectSoundBuffer_SetDopplerFactor_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSBUFFERSETDOPPLERFACTOR, // XRef Is Saved
    1,                             // XRef Is Used

    {
        // CDirectSoundBuffer_SetDopplerFactor+0x39 : call [CDirectSoundVoice::SetDopplerFactor]
        { 0x3A, XREF_DSVOICESETDOPPLERFACTOR },

        // CDirectSoundBuffer_SetDopplerFactor+0x2D : push    [esp+4+arg_8]
        { 0x2D, 0xFF },
        { 0x2E, 0x74 },
        { 0x2F, 0x24 },
        { 0x30, 0x14 },

        // CDirectSoundBuffer_SetDopplerFactor+0x32 : fstp [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // CDirectSoundBuffer_SetDopplerFactor+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetDopplerFactor
// ******************************************************************
SOOVPA<9> IDirectSoundBuffer_SetDopplerFactor_1_0_4627 =
{
    0,  // Large == 0
    9,  // Count == 9

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetDopplerFactor+0x1C : call [CDirectSoundBuffer::SetDopplerFactor]
        { 0x1D, XREF_DSBUFFERSETDOPPLERFACTOR },

        // IDirectSoundBuffer_SetDopplerFactor+0x08 : mov eax, [esp+4+arg_0]
        { 0x08, 0x8B },
        { 0x09, 0x44 },
        { 0x0A, 0x24 },
        { 0x0B, 0x08 },

        // IDirectSoundBuffer_SetDopplerFactor+0x19 : and ecx, eax
        { 0x19, 0x23 },
        { 0x1A, 0xC8 },

        // IDirectSoundBuffer_SetDopplerFactor+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundVoice::SetI3DL2Source
// ******************************************************************
SOOVPA<10> CDirectSoundVoice_SetI3DL2Source_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    XREF_DSVOICESETI3DL2SOURCE, // XRef Is Saved
    0,                          // XRef Not Used

    {
        // CDirectSoundVoice_SetI3DL2Source+0x12 : mov esi, [ecx]
        { 0x12, 0x8B },
        { 0x13, 0x31 },

        // CDirectSoundVoice_SetI3DL2Source+0x14 : mov [edx+4Ch], esi
        { 0x14, 0x89 },
        { 0x15, 0x72 },
        { 0x16, 0x4C },

        // CDirectSoundVoice_SetI3DL2Source+0x44 : fld dword ptr [ecx+10h]
        { 0x44, 0xD9 },
        { 0x45, 0x41 },
        { 0x46, 0x10 },

        // CDirectSoundVoice_SetI3DL2Source+0xAC : retn 0Ch
        { 0xAD, 0x0C },
        { 0xAE, 0x00 }
    }
};

// ******************************************************************
// * CDirectSoundBuffer::SetI3DL2Source
// ******************************************************************
SOOVPA<11> CDirectSoundBuffer_SetI3DL2Source_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    XREF_DSBUFFERSETI3DL2SOURCE, // XRef Is Saved
    1,                           // XRef Is Used

    {
        // CDirectSoundBuffer_SetI3DL2Source+0x35 : call [CDirectSoundVoice::SetI3DL2Source]
        { 0x36, XREF_DSVOICESETI3DL2SOURCE },

        // CDirectSoundBuffer_SetI3DL2Source+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSoundBuffer_SetI3DL2Source+0x31 : push [esp+0Ch+arg_0]
        { 0x31, 0xFF },
        { 0x32, 0x74 },
        { 0x33, 0x24 },
        { 0x34, 0x14 },

        // CDirectSoundBuffer_SetI3DL2Source+0x4F : retn 0Ch
        { 0x50, 0x0C },
        { 0x51, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_SetI3DL2Source
// ******************************************************************
SOOVPA<10> IDirectSoundBuffer_SetI3DL2Source_1_0_4627 =
{
    0,  // Large == 0
    10, // Count == 10

    -1, // XRef Not Saved
    1,  // XRef Is Used

    {
        // IDirectSoundBuffer_SetI3DL2Source+0x18 : call [CDirectSoundBuffer::SetI3DL2Source]
        { 0x19, XREF_DSBUFFERSETI3DL2SOURCE },

        // IDirectSoundBuffer_SetI3DL2Source+0x04 : push [esp+arg_8]
        { 0x04, 0xFF },
        { 0x05, 0x74 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetI3DL2Source+0x0E : add eax, 0FFFFFFE4h
        { 0x0E, 0x83 },
        { 0x0F, 0xC0 },
        { 0x10, 0xE4 },

        // IDirectSoundBuffer_SetI3DL2Source+0x1D : retn 0Ch
        { 0x1E, 0x0C },
        { 0x1F, 0x00 }
    }
};

// ******************************************************************
// * IDirectSoundBuffer_Stop
// ******************************************************************
SOOVPA<11> IDirectSoundBuffer_Stop_1_0_4627 =
{
    0,  // Large == 0
    11, // Count == 11

    -1, // XRef Not Saved
    0,  // XRef Not Used

    {
        // IDirectSoundBuffer_Stop+0x00 : mov eax, [esp+arg_0]
        { 0x00, 0x8B },
        { 0x01, 0x44 },
        { 0x02, 0x24 },
        { 0x03, 0x04 },

        // IDirectSoundBuffer_Stop+0x04 : mov ecx, eax
        { 0x04, 0x8B },
        { 0x05, 0xC8 },

        // IDirectSoundBuffer_Stop+0x06 : add eax, 0FFFFFFE4h
        { 0x06, 0x83 },
        { 0x07, 0xC0 },
        { 0x08, 0xE4 },

        // IDirectSoundBuffer_Stop+0x15 : retn 4
        { 0x16, 0x04 },
        { 0x17, 0x00 }
    }
};
// +s

// ******************************************************************
// * Direct_1_0_4627
// ******************************************************************
OOVPATable DSound_1_0_4627[] =
{
    // DirectSoundCreate (* unchanged since 4361 *)
    {
        (OOVPA*)&DirectSoundCreate_1_0_4361,

        XTL::EmuDirectSoundCreate,

        #ifdef _DEBUG_TRACE
        "EmuDirectSoundCreate" 
        #endif
    },
    // CDirectSound_CreateSoundBuffer
    {
        (OOVPA*)&CDirectSound_CreateSoundBuffer_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound::CreateSoundBuffer (XREF)" 
        #endif
    },
    // IDirectSoundBuffer8::SetPlayRegion (* unchanged since 4361 *)
    {
        (OOVPA*)&IDirectSoundBuffer8_SetPlayRegion_1_0_4361,

        XTL::EmuIDirectSoundBuffer8_SetPlayRegion,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSoundBuffer8_SetPlayRegion" 
        #endif
    },
    // IDirectSoundBuffer8::SetLoopRegion (* unchanged since 4361 *)
    {
        (OOVPA*)&IDirectSoundBuffer8_SetLoopRegion_1_0_4361,

        XTL::EmuIDirectSoundBuffer8_SetLoopRegion,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSoundBuffer8_SetLoopRegion" 
        #endif
    },
    // CDirectSound_SetI3DL2Listener
    {
        (OOVPA*)&CDirectSound_SetI3DL2Listener_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound::SetI3DL2Listener (XREF)" 
        #endif
    },
    // CDirectSound_SetMixBinHeadroom
    {
        (OOVPA*)&CDirectSound_SetMixBinHeadroom_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound::SetMixBinHeadroom (XREF)" 
        #endif
    },
    // IDirectSound8_SetMixBinHeadroom
    {
        (OOVPA*)&IDirectSound8_SetMixBinHeadroom_1_0_4627,

        XTL::EmuIDirectSound8_SetMixBinHeadroom,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_SetMixBinHeadroom"
        #endif
    },
    // CDirectSoundVoiceSettings_SetMixBins
    {
        (OOVPA*)&CDirectSoundVoiceSettings_SetMixBins_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoiceSettings::SetMixBins (XREF)" 
        #endif
    },
    // CDirectSoundVoice_SetMixBins
    {
        (OOVPA*)&CDirectSoundVoice_SetMixBins_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetMixBins (XREF)" 
        #endif
    },
    // CDirectSoundBuffer_SetMixBins
    {
        (OOVPA*)&CDirectSoundBuffer_SetMixBins_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetMixBins (XREF)" 
        #endif
    },
    // IDirectSoundBuffer8_SetMixBins
    {
        (OOVPA*)&IDirectSoundBuffer8_SetMixBins_1_0_4627,

        XTL::EmuIDirectSoundBuffer8_SetMixBins,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSoundBuffer8_SetMixBins"
        #endif
    },
    // CDirectSoundVoiceSettings_SetMixBinVolumes
    {
        (OOVPA*)&CDirectSoundVoiceSettings_SetMixBinVolumes_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoiceSettings::SetMixBinVolumes (XREF)" 
        #endif
    },
    // CDirectSoundVoice_SetMixBinVolumes
    {
        (OOVPA*)&CDirectSoundVoice_SetMixBinVolumes_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetMixBinVolumes (XREF)" 
        #endif
    },
    // CDirectSoundBuffer_SetMixBinVolumes
    {
        (OOVPA*)&CDirectSoundBuffer_SetMixBinVolumes_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetMixBinVolumes (XREF)" 
        #endif
    },
    // IDirectSoundBuffer8_SetMixBinVolumes
    {
        (OOVPA*)&IDirectSoundBuffer8_SetMixBinVolumes_1_0_4627,

        XTL::EmuIDirectSoundBuffer8_SetMixBinVolumes,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSoundBuffer8_SetMixBinVolumes"
        #endif
    },
    // CDirectSound::SetPositionA (XREF)
    {
        (OOVPA*)&CDirectSound_SetPositionA_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound_SetPositionA (XRef)"
        #endif
    },
    // IDirectSound8::SetPosition
    {
        (OOVPA*)&IDirectSound8_SetPosition_1_0_3936,

        XTL::EmuIDirectSound8_SetPosition,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_SetPosition" 
        #endif
    },
    // DirectSoundCreateBuffer
    {
        (OOVPA*)&DirectSoundCreateBuffer_1_0_4627,

        XTL::EmuDirectSoundCreateBuffer,

        #ifdef _DEBUG_TRACE
        "EmuDirectSoundCreateBuffer" 
        #endif
    },
    // IDirectSound8::CreateSoundBuffer
    {
        (OOVPA*)&IDirectSound8_CreateSoundBuffer_1_0_4627,

        XTL::EmuIDirectSound8_CreateSoundBuffer,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_CreateSoundBuffer" 
        #endif
    },
    // IDirectSound8_SetI3DL2Listener
    {
        (OOVPA*)&IDirectSound8_SetI3DL2Listener_1_0_4627,

        XTL::EmuIDirectSound8_SetI3DL2Listener,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_SetI3DL2Listener" 
        #endif
    },
    // CDirectSoundVoice::SetFrequency (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetFrequency_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice_SetFrequency (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetFrequency
    {
        (OOVPA*)&CDirectSoundBuffer_SetFrequency_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "EmuCDirectSoundBuffer_SetFrequency (XREF)" 
        #endif
    },
    // IDirectSoundBuffer8::SetFrequency
    {
        (OOVPA*)&IDirectSoundBuffer8_SetFrequency_1_0_4627,

        XTL::EmuIDirectSoundBuffer8_SetFrequency,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSoundBuffer8_SetFrequency" 
        #endif
    },
    // CMcpxVoiceClient_SetVolume
    {
        (OOVPA*)&CMcpxVoiceClient_SetVolume_1_0_4361, 0,

        #ifdef _DEBUG_TRACE
        "CMcpxVoiceClient::SetVolume (XREF)" 
        #endif
    },
    // CDirectSoundStream_SetVolume
    {
        (OOVPA*)&CDirectSoundStream_SetVolume_1_0_4361, 
            
        XTL::EmuCDirectSoundStream_SetVolume,

        #ifdef _DEBUG_TRACE
        "EmuCDirectSoundStream_SetVolume" 
        #endif
    },
    // IDirectSoundBuffer8::LockA (XREF)
    {
        (OOVPA*)&IDirectSoundBuffer8_LockA_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_LockA (XRef)"
        #endif
    },
    // IDirectSoundBuffer8::Lock
    {
        (OOVPA*)&IDirectSoundBuffer8_Lock_1_0_3936,

        XTL::EmuIDirectSoundBuffer8_Lock,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSoundBuffer8_Lock" 
        #endif
    },
    // CDirectSound_CreateSoundStream (* unchanged since 4361 *)
    {
        (OOVPA*)&CDirectSound_CreateSoundStream_1_0_4361, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound::CreateSoundStream (XREF)" 
        #endif
    },
    // DirectSoundCreateStream (* unchanged since 4361 *)
    {
        (OOVPA*)&DirectSoundCreateStream_1_0_4361,

        XTL::EmuDirectSoundCreateStream,

        #ifdef _DEBUG_TRACE
        "EmuDirectSoundCreateStream" 
        #endif
    },
    // CMcpxBuffer::SetBufferData (* unchanged since 4361 *)
    {
        (OOVPA*)&CMcpxBuffer_SetBufferData_1_0_4361, 0,

        #ifdef _DEBUG_TRACE
        "CMcpxBuffer_SetBufferData (XREF)"
        #endif
    },
    // CDirectSoundBuffer::SetBufferData (* unchanged since 4361 *)
    {
        (OOVPA*)&CDirectSoundBuffer_SetBufferData_1_0_4361, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer_SetBufferData (XREF)"
        #endif
    },
    // IDirectSoundBuffer8::SetBufferData (* unchanged since 4361 *)
    {
        (OOVPA*)&IDirectSoundBuffer8_SetBufferData_1_0_4361, 
            
        XTL::EmuIDirectSoundBuffer8_SetBufferData,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetBufferData"
        #endif
    },
    // CMcpxBuffer::GetStatus
    {
        (OOVPA*)&CMcpxBuffer_GetStatus_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CMcpxBuffer_GetStatus (XREF)"
        #endif
    },
    // CDirectSoundBuffer::GetStatus
    {
        (OOVPA*)&CDirectSoundBuffer_GetStatus_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer_GetStatus (XREF)"
        #endif
    },
    // IDirectSoundBuffer8::GetStatus
    {
        (OOVPA*)&IDirectSoundBuffer8_GetStatus_1_0_4627, 
            
        XTL::EmuIDirectSoundBuffer8_GetStatus,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_GetStatus"
        #endif
    },
    // CMcpxBuffer::Play (* unchanged since 4361 *)
    {
        (OOVPA*)&CMcpxBuffer_Play_1_0_4361, 0,

        #ifdef _DEBUG_TRACE
        "CMcpxBuffer_Play (XREF)"
        #endif
    },
    // CDirectSoundBuffer::Play (* unchanged since 4361 *)
    {
        (OOVPA*)&CDirectSoundBuffer_Play_1_0_4361, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer_Play (XREF)"
        #endif
    },
    // IDirectSoundBuffer8::Play (* unchanged since 4361 *)
    {
        (OOVPA*)&IDirectSoundBuffer8_Play_1_0_4361, 
            
        XTL::EmuIDirectSoundBuffer8_Play,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_Play"
        #endif
    },
    // IDirectSound8::Release (* unchanged since 3936 *)
    {
        (OOVPA*)&IDirectSound8_Release_1_0_3936,

        XTL::EmuIDirectSound8_Release,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_Release" 
        #endif
    },
    // IDirectSound8::DownloadEffectsImage (* unchanged since 3936 *)
    {
        (OOVPA*)&IDirectSound8_DownloadEffectsImage_1_0_3936,

        XTL::EmuIDirectSound8_DownloadEffectsImage,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_DownloadEffectsImage" 
        #endif
    },
    // IDirectSound8::SetOrientation (* unchanged since 3936 *)
    {
        (OOVPA*)&IDirectSound8_SetOrientation_1_0_3936,

        XTL::EmuIDirectSound8_SetOrientation,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_SetOrientation" 
        #endif
    },
    // CDirectSound::SetDistanceFactorA (XREF)
    {
        (OOVPA*)&CDirectSound_SetDistanceFactorA_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound_SetDistanceFactorA (XRef)"
        #endif
    },
    // IDirectSound8::SetDistanceFactor
    {
        (OOVPA*)&IDirectSound8_SetDistanceFactor_1_0_4627,

        XTL::EmuIDirectSound8_SetDistanceFactor,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_SetDistanceFactor" 
        #endif
    },
    // CDirectSound::SetRolloffFactor (XREF)
    {
        (OOVPA*)&CDirectSound_SetRolloffFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound_SetRolloffFactor (XRef)"
        #endif
    },
    // IDirectSound8::SetRolloffFactor
    {
        (OOVPA*)&IDirectSound8_SetRolloffFactor_1_0_4627,

        XTL::EmuIDirectSound8_SetRolloffFactor,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_SetRolloffFactor" 
        #endif
    },
    // CDirectSound::SetDopplerFactor (XREF)
    {
        (OOVPA*)&CDirectSound_SetDopplerFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSound_SetDopplerFactor (XRef)"
        #endif
    },
    // IDirectSound8::SetDopplerFactor
    {
        (OOVPA*)&IDirectSound8_SetDopplerFactor_1_0_4627,

        XTL::EmuIDirectSound8_SetDopplerFactor,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSound8_SetDopplerFactor" 
        #endif
    },
    // CDirectSound::CommitDeferredSettings
    {
        (OOVPA*)&CDirectSound_CommitDeferredSettings_1_0_4627,

        XTL::EmuCDirectSound_CommitDeferredSettings,

        #ifdef _DEBUG_TRACE
        "EmuCDirectSound_CommitDeferredSettings" 
        #endif
    },
    // s+
    // CDirectSoundVoice::SetMaxDistance (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetMaxDistance_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetMaxDistance (XRef)" 
        #endif
    },
    // CDirectSoundBuffer::SetMaxDistance (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetMaxDistance_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetMaxDistance (XRef)" 
        #endif
    },
    // IDirectSoundBuffer_SetMaxDistance
    {
        (OOVPA*)&IDirectSoundBuffer_SetMaxDistance_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetMaxDistance,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetMaxDistance" 
        #endif
    },
    // CDirectSoundVoice::SetMinDistance (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetMinDistance_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetMinDistance (XRef)" 
        #endif
    },
    // CDirectSoundBuffer::SetMinDistance (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetMinDistance_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetMinDistance (XRef)" 
        #endif
    },
    // IDirectSoundBuffer_SetMinDistance
    {
        (OOVPA*)&IDirectSoundBuffer_SetMinDistance_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetMinDistance,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetMinDistance" 
        #endif
    },
    // CDirectSoundVoice::SetRolloffFactor (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetRolloffFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetRolloffFactor (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetRolloffFactor (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetRolloffFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetRolloffFactor (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetRolloffFactor
    {
        (OOVPA*)&IDirectSoundBuffer_SetRolloffFactor_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetRolloffFactor,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetRolloffFactor" 
        #endif
    },
    // CDirectSoundVoice::SetDistanceFactor (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetDistanceFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetDistanceFactor (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetDistanceFactor (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetDistanceFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetDistanceFactor (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetDistanceFactor
    {
        (OOVPA*)&IDirectSoundBuffer_SetDistanceFactor_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetDistanceFactor,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetDistanceFactor" 
        #endif
    },
    // CDirectSoundVoice::SetConeAngles (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetConeAngles_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetConeAngles (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetConeAngles (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetConeAngles_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetConeAngles (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetConeAngles
    {
        (OOVPA*)&IDirectSoundBuffer_SetConeAngles_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetConeAngles,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetConeAngles" 
        #endif
    },
    // CDirectSoundVoice::SetConeOrientation (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetConeOrientation_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetConeOrientation (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetConeOrientation (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetConeOrientation_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetConeOrientation (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetConeOrientation
    {
        (OOVPA*)&IDirectSoundBuffer_SetConeOrientation_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetConeOrientation,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetConeOrientation" 
        #endif
    },
    // CDirectSoundVoice::SetConeOutsideVolume (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetConeOutsideVolume_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetConeOutsideVolume (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetConeOutsideVolume (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetConeOutsideVolume_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetConeOutsideVolume (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetConeOutsideVolume
    {
        (OOVPA*)&IDirectSoundBuffer_SetConeOutsideVolume_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetConeOutsideVolume,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetConeOutsideVolume" 
        #endif
    },
    // CDirectSoundVoice::SetPosition (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetPosition_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetPosition (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetPosition (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetPosition_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetPosition (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetPosition
    {
        (OOVPA*)&IDirectSoundBuffer_SetPosition_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetPosition,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetPosition" 
        #endif
    },
    // CDirectSoundVoice::SetVelocity (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetVelocity_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetVelocity (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetVelocity (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetVelocity_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetVelocity (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetVelocity
    {
        (OOVPA*)&IDirectSoundBuffer_SetVelocity_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetVelocity,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetVelocity" 
        #endif
    },
    // CDirectSoundVoice::SetDopplerFactor (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetDopplerFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetDopplerFactor (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetDopplerFactor (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetDopplerFactor_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetDopplerFactor (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetDopplerFactor
    {
        (OOVPA*)&IDirectSoundBuffer_SetDopplerFactor_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetDopplerFactor,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetDopplerFactor" 
        #endif
    },
    // CDirectSoundVoice::SetI3DL2Source (XREF)
    {
        (OOVPA*)&CDirectSoundVoice_SetI3DL2Source_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundVoice::SetI3DL2Source (XRef)"
        #endif
    },
    // CDirectSoundBuffer::SetI3DL2Source (XREF)
    {
        (OOVPA*)&CDirectSoundBuffer_SetI3DL2Source_1_0_4627, 0,

        #ifdef _DEBUG_TRACE
        "CDirectSoundBuffer::SetI3DL2Source (XRef)"
        #endif
    },
    // IDirectSoundBuffer_SetI3DL2Source
    {
        (OOVPA*)&IDirectSoundBuffer_SetI3DL2Source_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_SetI3DL2Source,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_SetI3DL2Source" 
        #endif
    },
    // IDirectSoundBuffer_Stop (Possibly weak, but quite OK for 4627 DSOUND)
    {
        (OOVPA*)&IDirectSoundBuffer_Stop_1_0_4627,
        XTL::EmuIDirectSoundBuffer8_Stop,

        #ifdef _DEBUG_TRACE
        "IDirectSoundBuffer8_Stop"
        #endif
    },
    // IDirectSoundBuffer8::Release (* unchanged since 3936 *)
    {
        (OOVPA*)&IDirectSoundBuffer8_Release_1_0_3936,

        XTL::EmuIDirectSoundBuffer8_Release,

        #ifdef _DEBUG_TRACE
        "EmuIDirectSoundBuffer8_Release" 
        #endif
    },
    // +s
};

// ******************************************************************
// * DSound_1_0_4627_SIZE
// ******************************************************************
uint32 DSound_1_0_4627_SIZE = sizeof(DSound_1_0_4627);