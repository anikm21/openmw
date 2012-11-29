#ifndef CSM_WOLRD_COMMANDS_H
#define CSM_WOLRD_COMMANDS_H

#include "record.hpp"

#include <QVariant>
#include <QUndoCommand>
#include <QModelIndex>

class QModelIndex;
class QAbstractItemModel;

namespace CSMWorld
{
    class ModifyCommand : public QUndoCommand
    {
            QAbstractItemModel& mModel;
            QModelIndex mIndex;
            QVariant mNew;
            QVariant mOld;

        public:

            ModifyCommand (QAbstractItemModel& model, const QModelIndex& index, const QVariant& new_,
                QUndoCommand *parent = 0);

            virtual void redo();

            virtual void undo();
    };
}

#endif