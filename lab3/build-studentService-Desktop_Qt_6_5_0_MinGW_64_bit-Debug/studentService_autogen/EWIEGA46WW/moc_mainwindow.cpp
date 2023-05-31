/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../studentService/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "changePrice",
    "",
    "openExplorer",
    "getCity",
    "std::string",
    "getAdress",
    "getInstitute",
    "getCaffe",
    "getCinema",
    "getAge"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[10];
    char stringdata7[13];
    char stringdata8[9];
    char stringdata9[10];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 11),  // "changePrice"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 12),  // "openExplorer"
        QT_MOC_LITERAL(37, 7),  // "getCity"
        QT_MOC_LITERAL(45, 11),  // "std::string"
        QT_MOC_LITERAL(57, 9),  // "getAdress"
        QT_MOC_LITERAL(67, 12),  // "getInstitute"
        QT_MOC_LITERAL(80, 8),  // "getCaffe"
        QT_MOC_LITERAL(89, 9),  // "getCinema"
        QT_MOC_LITERAL(99, 6)   // "getAge"
    },
    "MainWindow",
    "changePrice",
    "",
    "openExplorer",
    "getCity",
    "std::string",
    "getAdress",
    "getInstitute",
    "getCaffe",
    "getCinema",
    "getAge"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       6,    0,   65,    2, 0x0a,    4 /* Public */,
       7,    0,   66,    2, 0x0a,    5 /* Public */,
       8,    0,   67,    2, 0x0a,    6 /* Public */,
       9,    0,   68,    2, 0x0a,    7 /* Public */,
      10,    0,   69,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    0x80000000 | 5,
    0x80000000 | 5,
    0x80000000 | 5,
    0x80000000 | 5,
    QMetaType::Int,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'changePrice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openExplorer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getCity'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getAdress'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getInstitute'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getCaffe'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getCinema'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getAge'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changePrice(); break;
        case 1: _t->openExplorer(); break;
        case 2: { std::string _r = _t->getCity();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 3: { std::string _r = _t->getAdress();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 4: { std::string _r = _t->getInstitute();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 5: { std::string _r = _t->getCaffe();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 6: { std::string _r = _t->getCinema();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->getAge();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
