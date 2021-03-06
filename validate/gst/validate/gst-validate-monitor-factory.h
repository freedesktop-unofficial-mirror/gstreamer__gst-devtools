/* GStreamer
 * Copyright (C) 2013 Thiago Santos <thiago.sousa.santos@collabora.com>
 *
 * gst-validate-monitor-factory.h - Validate Element monitors factory utility functions
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GST_VALIDATE_MONITOR_FACTORY_H__
#define __GST_VALIDATE_MONITOR_FACTORY_H__

#include <glib-object.h>
#include <gst/gst.h>

#include <gst/validate/gst-validate-monitor.h>
#include <gst/validate/gst-validate-runner.h>

G_BEGIN_DECLS

GstValidateMonitor *       gst_validate_monitor_factory_create (GstObject * target, GstValidateRunner * runner, GstValidateMonitor * parent);

G_END_DECLS

#endif /* __GST_VALIDATE_MONITOR_FACTORY_H__ */

