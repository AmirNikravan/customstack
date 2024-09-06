#include "widget.h"

QCustomQStackedWidget::QCustomQStackedWidget(QWidget *parent)
    : QStackedWidget(parent) {

  transitionDirection = Qt::Vertical;
  fadeTransition = false;
  slideTransition = false;
  transitionTime = 500;
  fadeTime = 500;
  transitionEasingCurve = QEasingCurve::OutBack;
  currentWidget = 0;
  fadeEasingCurve = QEasingCurve::Linear;
  nextWidget = 0;
  _currentWidgetPosition = QPoint(0, 0);
  bool widgetActive = false;
}

FadeWidgetTransition::FadeWidgetTransition(
    QCustomQStackedWidget *animationSettings, QWidget *oldWidget,
    QWidget *newWidget)
    : {}
