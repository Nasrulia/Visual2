#include <formutama.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormUtama U;
    U.show();
    return a.exec();
}
