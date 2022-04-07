#pragma once

#include <QtCore/qglobal.h>

#if defined(YX_UTIL_LIBRARY)
#   define YX_UTIL_EXPORT Q_DECL_EXPORT
#else
#   define YX_UTIL_EXPORT Q_DECL_IMPORT
#endif
