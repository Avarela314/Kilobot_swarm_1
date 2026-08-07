/****************************************************************************
** Meta object code from reading C++ file 'kilowindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kilowindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kilowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
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
struct qt_meta_tag_ZN10KiloWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto KiloWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10KiloWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KiloWindow",
        "selectFTDI",
        "",
        "selectVUSB",
        "selectSerial",
        "toggleConnection",
        "showError",
        "serialUpdateStatus",
        "ftdiUpdateStatus",
        "vusbUpdateStatus",
        "chooseProgramFile",
        "uploadProgram",
        "stopSending",
        "sendMessage",
        "sendDataMessage",
        "uint8_t*",
        "uint8_t",
        "serialShow",
        "calibShow",
        "setPort",
        "calibUID",
        "calibLeft",
        "calibRight",
        "calibStraight",
        "calibSave",
        "calibStop"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'selectFTDI'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectVUSB'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectSerial'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleConnection'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showError'
        QtMocHelpers::SlotData<void(QString)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'serialUpdateStatus'
        QtMocHelpers::SlotData<void(QString)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'ftdiUpdateStatus'
        QtMocHelpers::SlotData<void(QString)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'vusbUpdateStatus'
        QtMocHelpers::SlotData<void(QString)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'chooseProgramFile'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'uploadProgram'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stopSending'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sendMessage'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'sendDataMessage'
        QtMocHelpers::SlotData<void(uint8_t *, uint8_t)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 2 }, { 0x80000000 | 16, 2 },
        }}),
        // Slot 'serialShow'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'calibShow'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPort'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'calibUID'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'calibLeft'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'calibRight'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'calibStraight'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'calibSave'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'calibStop'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KiloWindow, qt_meta_tag_ZN10KiloWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KiloWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10KiloWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10KiloWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10KiloWindowE_t>.metaTypes,
    nullptr
} };

void KiloWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KiloWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectFTDI(); break;
        case 1: _t->selectVUSB(); break;
        case 2: _t->selectSerial(); break;
        case 3: _t->toggleConnection(); break;
        case 4: _t->showError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->serialUpdateStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->ftdiUpdateStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->vusbUpdateStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->chooseProgramFile(); break;
        case 9: _t->uploadProgram(); break;
        case 10: _t->stopSending(); break;
        case 11: _t->sendMessage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->sendDataMessage((*reinterpret_cast<std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 13: _t->serialShow(); break;
        case 14: _t->calibShow(); break;
        case 15: _t->setPort((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->calibUID((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->calibLeft((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->calibRight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->calibStraight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->calibSave(); break;
        case 21: _t->calibStop(); break;
        default: ;
        }
    }
}

const QMetaObject *KiloWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KiloWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10KiloWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KiloWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
