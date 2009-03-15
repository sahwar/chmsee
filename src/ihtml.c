/*
 *  Copyright (C) 2009 LI Daobing <lidaobing@gmail.com>
 *
 *  ChmSee is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.

 *  ChmSee is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with ChmSee; see the file COPYING.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "ihtml.h"

static void
chmsee_ihtml_base_init (gpointer g_class)
{
  static gboolean is_initialized = FALSE;

  if (!is_initialized)
    {
      /* add properties and signals to the interface here */

      is_initialized = TRUE;
    }
}

GType
chmsee_ihtml_get_type (void)
{
  static GType iface_type = 0;
  if (iface_type == 0)
    {
      static const GTypeInfo info = {
        sizeof (ChmseeIhtmlInterface),
        chmsee_ihtml_base_init,   /* base_init */
        NULL,   /* base_finalize */
      };

      iface_type = g_type_register_static (G_TYPE_INTERFACE, "ChmseeIhtml",
                                           &info, 0);
    }

  return iface_type;
}
