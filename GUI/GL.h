#ifndef GL_H
#define GL_H
#include <QGLWidget>

class GL : public QGLWidget {
public:
    GL();
private:
    void initializeGL();
    void paintGL();
    void resizeGL(int, int);
};

#endif // GL_H
