/*
  Created by Jenny White on 30.04.18.
  Copyright (c) 2018 nullworks. All rights reserved.
*/

#include <glez/detail/font.hpp>
#include <glez/detail/program.hpp>
#include <glez/detail/render.hpp>
#include <glez/detail/texture.hpp>

namespace glez
{

void init(int width, int height)
{
    detail::font::init();
    detail::program::init(width, height);
    detail::texture::init();
}

void shutdown()
{
    detail::font::shutdown();
    detail::program::shutdown();
    detail::texture::shutdown();
}

void resize(int width, int height)
{
    detail::program::resize(width, height);
}

void begin()
{
    detail::render::begin();
}

void end()
{
    detail::render::end();
}

}