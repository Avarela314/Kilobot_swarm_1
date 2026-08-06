/****************************************************************************
** Meta object code from reading C++ file 'ftdiconn.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ftdiconn.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftdiconn.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14FTDIConnectionE_t {};
} // unnamed namespace

template <> constexpr inline auto FTDIConnection::qt_create_metaobjectdata<qt_meta_tag_ZN14FTDIConnectionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FTDIConnection",
        "readText",
        "",
        "status",
        "error",
        "sendCommand",
        "sendProgram",
        "open",
        "close",
        "read",
        "readLoop",
        "programLoop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'readText'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'status'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'error'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'sendCommand'
        QtMocHelpers::SlotData<void(QByteArray)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 2 },
        }}),
        // Slot 'sendProgram'
        QtMocHelpers::SlotData<void(QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'read'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'readLoop'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'programLoop'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FTDIConnection, qt_meta_tag_ZN14FTDIConnectionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FTDIConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14FTDIConnectionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14FTDIConnectionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14FTDIConnectionE_t>.metaTypes,
    nullptr
} };

void FTDIConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FTDIConnection *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->readText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->status((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->sendCommand((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 4: _t->sendProgram((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->open(); break;
        case 6: _t->close(); break;
        case 7: _t->read(); break;
        case 8: _t->readLoop(); break;
        case 9: _t->programLoop(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FTDIConnection::*)(QString )>(_a, &FTDIConnection::readText, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FTDIConnection::*)(QString )>(_a, &FTDIConnection::status, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FTDIConnection::*)(QString )>(_a, &FTDIConnection::error, 2))
            return;
    }
}

const QMetaObject *FTDIConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FTDIConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14FTDIConnectionE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FTDIConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FTDIConnection::readText(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void FTDIConnection::status(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void FTDIConnection::error(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
