#ifndef WIDGET_H
#define WIDGET_H
#include <QAbstractAnimation>
#include <QEasingCurve>
#include <QParallelAnimationGroup>
#include <QPoint>
#include <QPropertyAnimation>
#include <QStackedWidget>
#include <QTimeLine>
#include <QWidget>
class QCustomQStackedWidget : public QStackedWidget {
  Q_OBJECT
public:
  explicit QCustomQStackedWidget(QWidget *parent = nullptr);

private:
  // Fade transition
  bool fadeTransition;
  //  Slide transition
  bool slideTransition;
  // Default transition direction
  Qt::Orientation transitionDirection;
  // Default transition animation time
  int transitionTime = 500;
  // Default fade animation time
  int fadeTime;
  // Default transition animation easing curve
  QEasingCurve transitionEasingCurve;
  // Default transition animation easing curve
  QEasingCurve fadeEasingCurve;
  // Default current widget index
  int currentWidget;
  // Default next widget index
  int nextWidget;
  // Default widget position
  QPoint _currentWidgetPosition;
  // Default boolean for active widget
  bool widgetActive;
};
class FadeWidgetTransition : public QWidget {
  Q_OBJECT
public:
  explicit FadeWidgetTransition(QCustomQStackedWidget *, QWidget *, QWidget *);
};

#endif // WIDGET_H
