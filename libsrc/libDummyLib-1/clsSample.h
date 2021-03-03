/*################################################################################
#   TargomanBuildSystem
#
#   Copyright(c) 2021 by Targoman Intelligent Processing <http://tip.co.ir>
#
#   Redistribution and use in source and binary forms are allowed under the
#   terms of BSD License 2.0. See LICENSE file
################################################################################*/
/**
 * @author S. Mohammad M. Ziabary <ziabary@targoman.com>
 */
#include <QSharedDataPointer>

namespace DummyLib1 {
namespace Private {
class clsSamplePrivate;
}
class clsSample{
public:
    clsSample(const QString& _sampleString);
    ~clsSample();

    QString info();

public:
    QSharedDataPointer<DummyLib1::Private::clsSamplePrivate> Data;
};

}
