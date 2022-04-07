#pragma once

#include <QString>
#include "util_global.h"

namespace yx
{
class YX_UTIL_EXPORT Text
{
public:
    Text() = default;
    explicit Text(const QString &s) : _text(s) {}

    const QString &text() const { return _text; }
    void setText(const QString &s) { _text = s; }

    void append(const QString &s);
    void clear();

private:
    QString _text = QStringLiteral("YX");
};
}  // namespace yx
