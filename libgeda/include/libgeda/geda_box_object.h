/* gEDA - GPL Electronic Design Automation
 * libgeda - gEDA's library
 * Copyright (C) 1998-2010 Ales Hvezda
 * Copyright (C) 1998-2010 gEDA Contributors (see ChangeLog for details)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */
/*! \file geda_box_object.h
 *
 *  \brief Functions operating on box drawing objects
 */

#define BOX_UPPER_LEFT  0
#define BOX_LOWER_RIGHT 1
#define BOX_UPPER_RIGHT 2
#define BOX_LOWER_LEFT  3

OBJECT*
geda_box_object_new (TOPLEVEL *toplevel, char type, int color, int x1, int y1, int x2, int y2);

OBJECT*
geda_box_object_copy (TOPLEVEL *toplevel, OBJECT *o_current);

void
geda_box_object_modify_all (TOPLEVEL *toplevel, OBJECT *object, int x1, int y1, int x2, int y2);

void
geda_box_object_modify (TOPLEVEL *toplevel, OBJECT *object, int x, int y, int whichone);

void
geda_box_object_translate (GedaObject *object, int dx, int dy);

void
geda_box_object_rotate (TOPLEVEL *toplevel, int world_centerx, int world_centery, int angle, OBJECT *object);

void
geda_box_object_mirror (TOPLEVEL *toplevel, int world_centerx, int world_centery, OBJECT *object);

OBJECT*
o_box_read(TOPLEVEL *toplevel, const char buf[], unsigned int release_ver, unsigned int fileformat_ver, GError **err);

gchar*
geda_box_object_to_buffer (const GedaObject *object);

double
o_box_shortest_distance(TOPLEVEL *toplevel, OBJECT *object, int x, int y, int force_soild);

void
world_get_box_bounds(TOPLEVEL *toplevel, OBJECT *object, int *left, int *top, int *right, int *bottom);

gboolean
o_box_get_position(TOPLEVEL *toplevel, gint *x, gint *y, OBJECT *object);