#include "Text.h"

namespace yx
{
void Text::append(const QString &s)
{
    _text += "_" + s;
}

void Text::clear()
{
    _text.clear();
}
} // namespace yx
