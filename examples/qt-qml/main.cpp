/* main.mm ---
 *
 * Author: Julien Wintz
 * Created: Thu Mar  7 21:59:40 2013 (+0100)
 * Version:
 * Last-Updated:
 *           By:
 *     Update #: 155
 */

/* Change Log:
 *
 */

#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QQuickView>

#define QT_QML_NO_DEBUGGER

int main(int argc, char **argv) {
  QApplication application(argc, argv);

  QQuickView view;
  view.setResizeMode(QQuickView::SizeRootObjectToView);
  view.show();

  return application.exec();
}
