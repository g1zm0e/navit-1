//#ifndef NAVITSUBCOMPOSITOR_H
//#define NAVITSUBCOMPOSITOR_H

//#include <QtWaylandCompositor/QWaylandQuickCompositor>

//#include <QtQuick/QQuickView>

//class QWaylandSurfaceItem;
//class QWaylandQuickSurface;

//class NavitSubCompositor : public QQuickView, public QWaylandQuickCompositor {
    //Q_OBJECT
    //Q_PROPERTY(QWaylandQuickSurface* fullscreenSurface READ fullscreenSurface WRITE setFullscreenSurface NOTIFY fullscreenSurfaceChanged)
//public:
    //NavitSubCompositor(const QString& socketName = "");
//public slots:
    //QWaylandSurfaceItem *item(QWaylandSurface* surf);
    //QWaylandQuickSurface* fullscreenSurface() const;
    //void setFullscreenSurface(QWaylandQuickSurface* surface);

//private slots:
    //void sendCallbacks();

    //// surface
    //void surfaceMapped();
    //void surfaceUnmapped();
    //void surfaceDestroyed();
//signals:

    //void windowAdded(QVariant window);
    //void windowResized(QVariant window);
    //void windowDestroyed(QVariant window);

    //void fullscreenSurfaceChanged();

    //void resized(const QRect& geo);

//protected:
    //virtual void resizeEvent(QResizeEvent* event) override;
    //virtual void surfaceCreated(QWaylandSurface* surface) override;
//private:
    //QWaylandQuickSurface* m_fullscreenSurface;
//};

//#endif // NAVITSUBCOMPOSITOR_H
