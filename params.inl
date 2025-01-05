struct kv {
  const char *first;
  GLenum second;
  const char *description;
};

static const struct kv strings[] = {
    {"GL_VENDOR", GL_VENDOR, "Returns the company responsible for this GL implementation. This name does not change from release to release."},
    {"GL_RENDERER", GL_RENDERER, "Returns the name of the renderer. This name is typically specific to a particular configuration of a hardware platform. It does not change from release to release."},
    {"GL_VERSION", GL_VERSION, "Returns a version or release number."},
    {"GL_SHADING_LANGUAGE_VERSION", GL_SHADING_LANGUAGE_VERSION, "Returns a version or release number for the shading language."},
    {"GL_EXTENSIONS", GL_EXTENSIONS, ""},
};

static const struct kv integers[] = {
    {"GL_MAX_TEXTURE_SIZE", GL_MAX_TEXTURE_SIZE, "returns one value. The value gives a rough estimate of the largest texture that the GL can handle. The value must be at least 1024."},
};
