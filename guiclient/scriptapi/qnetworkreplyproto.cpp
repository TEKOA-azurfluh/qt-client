/*
 * Common Public Attribution License Version 1.0. 
 * 
 * The contents of this file are subject to the Common Public Attribution 
 * License Version 1.0 (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License 
 * at http://www.xTuple.com/CPAL.  The License is based on the Mozilla 
 * Public License Version 1.1 but Sections 14 and 15 have been added to 
 * cover use of software over a computer network and provide for limited 
 * attribution for the Original Developer. In addition, Exhibit A has 
 * been modified to be consistent with Exhibit B.
 * 
 * Software distributed under the License is distributed on an "AS IS" 
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See 
 * the License for the specific language governing rights and limitations 
 * under the License. 
 * 
 * The Original Code is xTuple ERP: PostBooks Edition 
 * 
 * The Original Developer is not the Initial Developer and is __________. 
 * If left blank, the Original Developer is the Initial Developer. 
 * The Initial Developer of the Original Code is OpenMFG, LLC, 
 * d/b/a xTuple. All portions of the code written by xTuple are Copyright 
 * (c) 1999-2008 OpenMFG, LLC, d/b/a xTuple. All Rights Reserved. 
 * 
 * Contributor(s): ______________________.
 * 
 * Alternatively, the contents of this file may be used under the terms 
 * of the xTuple End-User License Agreeement (the xTuple License), in which 
 * case the provisions of the xTuple License are applicable instead of 
 * those above.  If you wish to allow use of your version of this file only 
 * under the terms of the xTuple License and not to allow others to use 
 * your version of this file under the CPAL, indicate your decision by 
 * deleting the provisions above and replace them with the notice and other 
 * provisions required by the xTuple License. If you do not delete the 
 * provisions above, a recipient may use your version of this file under 
 * either the CPAL or the xTuple License.
 * 
 * EXHIBIT B.  Attribution Information
 * 
 * Attribution Copyright Notice: 
 * Copyright (c) 1999-2008 by OpenMFG, LLC, d/b/a xTuple
 * 
 * Attribution Phrase: 
 * Powered by xTuple ERP: PostBooks Edition
 * 
 * Attribution URL: www.xtuple.org 
 * (to be included in the "Community" menu of the application if possible)
 * 
 * Graphic Image as provided in the Covered Code, if any. 
 * (online at www.xtuple.com/poweredby)
 * 
 * Display of Attribution Information is required in Larger Works which 
 * are defined in the CPAL as a work which combines Covered Code or 
 * portions thereof with code not governed by the terms of the CPAL.
 */

#include "qnetworkreplyproto.h"

#include <QNetworkReply>

void setupQNetworkReplyProto(QScriptEngine *engine)
{
  QScriptValue replyproto = engine->newQObject(new QNetworkReplyProto(engine));
  engine->setDefaultPrototype(qMetaTypeId<QNetworkReply*>(), replyproto);
}

QNetworkReplyProto::QNetworkReplyProto(QObject *parent)
  : QObject(parent)
{
}

void  QNetworkReplyProto::abort() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    item->abort();
}

QVariant QNetworkReplyProto::attribute(const QNetworkRequest::Attribute &code) const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->attribute(code);
  return QVariant();
}

void QNetworkReplyProto::close()
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    item->close();
}

int QNetworkReplyProto::error() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->error();
  return (QNetworkReply::UnknownNetworkError);
}

bool QNetworkReplyProto::hasRawHeader(const QByteArray &headerName) const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->hasRawHeader(headerName);
  return false;
}    

QVariant QNetworkReplyProto::header(QNetworkRequest::KnownHeaders header) const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->header(header);
  return QVariant();
}

QNetworkAccessManager *QNetworkReplyProto::manager() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->manager();
  return 0;
}

QNetworkAccessManager::Operation QNetworkReplyProto::operation() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->operation();
  return QNetworkAccessManager::HeadOperation;
}

QByteArray QNetworkReplyProto::rawHeader(const QByteArray &headerName) const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    item->rawHeader(headerName);
  return QByteArray();
}

QList<QByteArray> QNetworkReplyProto::rawHeaderList() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->rawHeaderList();
  return QList<QByteArray>();
}

qint64 QNetworkReplyProto::readBufferSize() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->readBufferSize();
  return 0;
}

QNetworkRequest QNetworkReplyProto::request() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->request();
  return QNetworkRequest();
}

void QNetworkReplyProto::setReadBufferSize(qint64 size)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    item->setReadBufferSize(size);
}

#ifndef QT_NO_OPENSSL
void QNetworkReplyProto::setSslConfiguration(const QSslConfiguration &config)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    item->setSslConfiguration(config);
}

QSslConfiguration QNetworkReplyProto::sslConfiguration() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->sslConfiguration();
  return QSslConfiguration();
}
#endif 

QUrl QNetworkReplyProto::url() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->url();
  return QUrl();
}

QString QNetworkReplyProto::toString() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return QString("QNetworkReply(url=%1)").arg(url());
  return QString("QNetworkReply(unknown)").arg(url());
}

qint64 QNetworkReplyProto::bytesAvailable() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->bytesAvailable();
  return 0;
}

qint64 QNetworkReplyProto::bytesToWrite() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->bytesToWrite();
  return 0;
}

bool QNetworkReplyProto::canReadLine() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->canReadLine();
  return false;
}

QString QNetworkReplyProto::errorString() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->errorString();
  return QString();
}

bool QNetworkReplyProto::getChar(char * c)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->getChar(c);
  return false;
}

bool QNetworkReplyProto::isOpen() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->isOpen();
  return false;
}

bool QNetworkReplyProto::isReadable() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->isReadable();
  return false;
}

bool QNetworkReplyProto::isSequential() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->isSequential();
  return false;
}

bool QNetworkReplyProto::isTextModeEnabled() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->isTextModeEnabled();
  return false;
}

bool QNetworkReplyProto::isWritable() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->isWritable();
  return false;
}

bool QNetworkReplyProto::open(int mode)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->open((QIODevice::OpenMode)mode);
  return false;
}

int QNetworkReplyProto::openMode() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->openMode();
  return 0;
}

qint64 QNetworkReplyProto::peek(char * data, qint64 maxSize)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->peek(data, maxSize);
  return 0;
}

QByteArray QNetworkReplyProto::peek(qint64 maxSize)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->peek(maxSize);
  return QByteArray();
}

qint64 QNetworkReplyProto::pos() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->pos();
  return 0;
}

bool QNetworkReplyProto::putChar(char c)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->putChar(c);
  return false;
}

qint64 QNetworkReplyProto::read(char * data, qint64 maxSize)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->read(data, maxSize);
  return 0;
}

QByteArray QNetworkReplyProto::read(qint64 maxSize)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->read(maxSize);
  return QByteArray();
}

QByteArray QNetworkReplyProto::readAll()
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->readAll();
  return QByteArray();
}

qint64 QNetworkReplyProto::readLine(char * data, qint64 maxSize)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->readLine(data, maxSize);
  return 0;
}

QByteArray QNetworkReplyProto::readLine(qint64 maxSize)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->readLine(maxSize);
  return QByteArray();
}

bool QNetworkReplyProto::reset()
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->reset();
  return false;
}

bool QNetworkReplyProto::seek(qint64 pos)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->seek(pos);
  return false;
}

void QNetworkReplyProto::setTextModeEnabled(bool enabled)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    item->setTextModeEnabled(enabled);
}

qint64 QNetworkReplyProto::size() const
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->size();
  return 0;
}

void QNetworkReplyProto::ungetChar(char c)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    item->ungetChar(c);
}

bool QNetworkReplyProto::waitForBytesWritten(int msecs)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->waitForBytesWritten(msecs);
  return false;
}

bool QNetworkReplyProto::waitForReadyRead(int msecs)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->waitForReadyRead(msecs);
  return false;
}

qint64 QNetworkReplyProto::write(const char * data, qint64 maxSize)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->write(data, maxSize);
  return 0;
}

qint64 QNetworkReplyProto::write(const QByteArray &byteArray)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->write(byteArray);
  return 0;
}

qint64 QNetworkReplyProto::write(const QString &string)
{
  QNetworkReply *item = qscriptvalue_cast<QNetworkReply*>(thisObject());
  if (item)
    return item->write(string.toAscii());
  return 0;
}
