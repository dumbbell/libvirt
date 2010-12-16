
/*
 * vbox_MSCOMGlue.h: glue to the MSCOM based VirtualBox API
 *
 * Copyright (C) 2010 Matthias Bolte <matthias.bolte@googlemail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
 *
 */

#ifndef __VBOX_MSCOMGLUE_H__
# define __VBOX_MSCOMGLUE_H__

# include "vbox_CAPI_v3_2.h"

extern PFNVBOXGETXPCOMCFUNCTIONS g_pfnGetFunctions;

int VBoxCGlueInit(unsigned int *version);
void VBoxCGlueTerm(void);

typedef struct _vboxArray vboxArray;

struct _vboxArray {
    void **items;
    size_t count;
    void *handle;
};

# define VBOX_ARRAY_INITIALIZER { NULL, 0, NULL }

nsresult vboxArrayGet(vboxArray *array, void *self, void *getter);
nsresult vboxArrayGetWithArg(vboxArray *array, void *self, void *getter, void *arg);
void vboxArrayRelease(vboxArray *array);
# define vboxArrayUnalloc vboxArrayRelease

#endif /* __VBOX_MSCOMGLUE_H__ */
