/* GStreamer
 * Copyright (C) 2013 Thiago Santos <thiago.sousa.santos@collabora.com>
 *
 * gst-qa-pad-monitor.h - QA PadMonitor class
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

#ifndef __GST_QA_PAD_MONITOR_H__
#define __GST_QA_PAD_MONITOR_H__

#include <glib-object.h>
#include <gst/gst.h>

#include "gst-qa-monitor.h"

G_BEGIN_DECLS

#define GST_TYPE_QA_PAD_MONITOR			(gst_qa_pad_monitor_get_type ())
#define GST_IS_QA_PAD_MONITOR(obj)		(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GST_TYPE_QA_PAD_MONITOR))
#define GST_IS_QA_PAD_MONITOR_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GST_TYPE_QA_PAD_MONITOR))
#define GST_QA_PAD_MONITOR_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GST_TYPE_QA_PAD_MONITOR, GstQaPadMonitorClass))
#define GST_QA_PAD_MONITOR(obj)			(G_TYPE_CHECK_INSTANCE_CAST ((obj), GST_TYPE_QA_PAD_MONITOR, GstQaPadMonitor))
#define GST_QA_PAD_MONITOR_CLASS(klass)		(G_TYPE_CHECK_CLASS_CAST ((klass), GST_TYPE_QA_PAD_MONITOR, GstQaPadMonitorClass))
#define GST_QA_PAD_MONITOR_CAST(obj)            ((GstQaPadMonitor*)(obj))
#define GST_QA_PAD_MONITOR_CLASS_CAST(klass)    ((GstQaPadMonitorClass*)(klass))

#define GST_QA_PAD_MONITOR_GET_PAD(m) (GST_PAD_CAST (GST_QA_MONITOR_GET_OBJECT (m)))

typedef struct _GstQaPadMonitor GstQaPadMonitor;
typedef struct _GstQaPadMonitorClass GstQaPadMonitorClass;

/**
 * GstQaPadMonitor:
 *
 * GStreamer QA PadMonitor class.
 *
 * Class that wraps a #GstPad for QA checks
 */
struct _GstQaPadMonitor {
  GstQaMonitor 	 parent;

  gboolean       setup;
  GstPad        *pad;

  /*< private >*/
};

/**
 * GstQaPadMonitorClass:
 * @parent_class: parent
 *
 * GStreamer QA PadMonitor object class.
 */
struct _GstQaPadMonitorClass {
  GstQaMonitorClass	parent_class;
};

/* normal GObject stuff */
GType		gst_qa_pad_monitor_get_type		(void);

GstQaPadMonitor *   gst_qa_pad_monitor_new      (GstPad * pad);

G_END_DECLS

#endif /* __GST_QA_PAD_MONITOR_H__ */

