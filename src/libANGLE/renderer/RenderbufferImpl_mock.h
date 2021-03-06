//
// Copyright 2015 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// RenderbufferImpl_mock.h: Defines a mock of the RenderbufferImpl class.

#ifndef LIBANGLE_RENDERER_RENDERBUFFERIMPLMOCK_H_
#define LIBANGLE_RENDERER_RENDERBUFFERIMPLMOCK_H_

#include "gmock/gmock.h"

#include "libANGLE/Image.h"
#include "libANGLE/Renderbuffer.h"
#include "libANGLE/renderer/RenderbufferImpl.h"

namespace rx
{

class MockRenderbufferImpl : public RenderbufferImpl
{
  public:
    MockRenderbufferImpl() : RenderbufferImpl(mMockState) {}
    virtual ~MockRenderbufferImpl() { destructor(); }
    MOCK_METHOD4(setStorage, angle::Result(const gl::Context *, GLenum, size_t, size_t));
    MOCK_METHOD5(setStorageMultisample,
                 angle::Result(const gl::Context *, size_t, GLenum, size_t, size_t));
    MOCK_METHOD2(setStorageEGLImageTarget, angle::Result(const gl::Context *, egl::Image *));

    MOCK_METHOD4(getAttachmentRenderTarget,
                 angle::Result(const gl::Context *,
                               GLenum,
                               const gl::ImageIndex &,
                               FramebufferAttachmentRenderTarget **));

    MOCK_METHOD0(destructor, void());

  protected:
    gl::RenderbufferState mMockState;
};

}  // namespace rx

#endif  // LIBANGLE_RENDERER_RENDERBUFFERIMPLMOCK_H_
