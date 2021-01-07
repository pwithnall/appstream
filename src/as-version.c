/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2018 Richard Hughes <richard@hughsie.com>
 * Copyright (C) 2021 Matthias Klumpp <matthias@tenstral.net>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the license, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * SECTION:as-version
 * @short_description: Helpers for the current runtime version.
 * @include: appstream.h
 * @stability: Stable
 *
 * The version number can be different between build-time and runtime.
 */

#include "config.h"

#include <glib.h>

#include "as-version.h"

/**
 * as_version_string:
 *
 * Get the version of the AppStream library that is currently used
 * at runtime as a string.
 *
 * Returns: a version number, e.g. "0.14.2"
 *
 * Since: 0.14.0
 **/
const gchar*
as_version_string (void)
{
	return G_STRINGIFY(AS_MAJOR_VERSION) "."
		G_STRINGIFY(AS_MINOR_VERSION) "."
		G_STRINGIFY(AS_MICRO_VERSION);
}