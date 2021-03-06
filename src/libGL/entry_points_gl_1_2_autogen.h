// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_1_2_autogen.h:
//   Defines the GL 1.2 entry points.

#ifndef LIBGL_ENTRY_POINTS_GL_1_2_AUTOGEN_H_
#define LIBGL_ENTRY_POINTS_GL_1_2_AUTOGEN_H_

#include <export.h>
#include "angle_gl.h"

namespace gl
{
ANGLE_EXPORT void GL_APIENTRY CopyTexSubImage3D(GLenum target,
                                                GLint level,
                                                GLint xoffset,
                                                GLint yoffset,
                                                GLint zoffset,
                                                GLint x,
                                                GLint y,
                                                GLsizei width,
                                                GLsizei height);
ANGLE_EXPORT void GL_APIENTRY DrawRangeElements(GLenum mode,
                                                GLuint start,
                                                GLuint end,
                                                GLsizei count,
                                                GLenum type,
                                                const void *indices);
ANGLE_EXPORT void GL_APIENTRY TexImage3D(GLenum target,
                                         GLint level,
                                         GLint internalformat,
                                         GLsizei width,
                                         GLsizei height,
                                         GLsizei depth,
                                         GLint border,
                                         GLenum format,
                                         GLenum type,
                                         const void *pixels);
ANGLE_EXPORT void GL_APIENTRY TexSubImage3D(GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLint zoffset,
                                            GLsizei width,
                                            GLsizei height,
                                            GLsizei depth,
                                            GLenum format,
                                            GLenum type,
                                            const void *pixels);
}  // namespace gl

#endif  // LIBGL_ENTRY_POINTS_GL_1_2_AUTOGEN_H_
