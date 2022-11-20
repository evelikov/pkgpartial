project(
  'pkg-partial-deps',
  ['c'],
  version : '1.0.0',
  meson_version : '>= 0.53',
)

dep_drm = dependency('libdrm').partial_dependency(compile_args : true)

libpkgpartial = library(
  'libpkgpartial', 'main.c',
  dependencies : dep_drm,
  version : meson.project_version(),
  install : true,
)

pkg = import('pkgconfig')
pkg.generate(
  libpkgpartial,
  version : meson.project_version(),
)
