#ifndef MUSICCLOUDDATAITEM_H
#define MUSICCLOUDDATAITEM_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2018 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "musicabstractmovedialog.h"
#include "musicabstracttablewidget.h"

#include "qiniu/qnsimplelistdata.h"

/*! @brief The class of the cloud data item.
 * @author Greedysky <greedysky@163.com>
 */
typedef struct MUSIC_TOOL_EXPORT MusicCloudDataItem
{
    enum State
    {
        Waited = 0,     /*!< 0 waited*/
        Uploaded,       /*!< 1 Uploaded*/
        Successed,      /*!< 2 successed*/
        Errored         /*!< 3 error*/
    };

    QString m_id;
    QString m_path;
    QString m_name;
    State m_state;
    QNDataItem m_dataItem;

    inline bool isValid() const
    {
        return !m_name.isEmpty();
    }

    inline bool operator==(const MusicCloudDataItem &other) const
    {
        return m_name == other.m_name;
    }
}MusicCloudDataItem;
TTK_DECLARE_LISTS(MusicCloudDataItem)

#endif // MUSICCLOUDDATAITEM_H
