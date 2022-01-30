#ifndef IHM_H
#define IHM_H

#include <QMainWindow>

class IHM : public QMainWindow
{
    Q_OBJECT

  public:
    IHM(QWidget* parent = nullptr);
    ~IHM();
};

#endif // IHM_H
