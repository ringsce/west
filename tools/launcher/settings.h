/*
The MIT License (MIT)

Copyright (c) 2013 The ioquake Group

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>

class QString;

class Settings
{
public:
    Settings();

    bool getHaveRun() const;
    void setHaveRun(bool value);

    QString getQuakePath() const;
    bool containsQuakePath() const;
    void setQuakePath(const QString &path);

    int getResolutionMode() const;
    void setResolutionMode(int mode);

    int getResolutionWidth() const;
    void setResolutionWidth(int width);

    int getResolutionHeight() const;
    void setResolutionHeight(int height);

    bool getResolutionFullscreen() const;
    void setResolutionFullscreen(bool value);

private:
    QSettings settings;
};

#endif // SETTINGS_H
