/** @file
  Copyright (C) 2020, vit9696. All rights reserved.

  All rights reserved.

  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#ifndef OC_CONSOLE_LIB_INTERNAL_H
#define OC_CONSOLE_LIB_INTERNAL_H

#include <Library/OcConsoleLib.h>
#include <Protocol/GraphicsOutput.h>
#include <Protocol/UgaDraw.h>

typedef struct {
  EFI_GRAPHICS_OUTPUT_PROTOCOL  *GraphicsOutput;
  EFI_UGA_DRAW_PROTOCOL         Uga;
} OC_UGA_PROTOCOL;

EFI_STATUS
SetConsoleResolutionForProtocol (
  IN  EFI_GRAPHICS_OUTPUT_PROTOCOL    *GraphicsOutput,
  IN  UINT32                          Width,
  IN  UINT32                          Height,
  IN  UINT32                          Bpp    OPTIONAL,
  IN  BOOLEAN                         Reconnect
  );

VOID
OcProvideUgaPassThrough (
  VOID
  );

#endif // OC_CONSOLE_LIB_INTERNAL_H
