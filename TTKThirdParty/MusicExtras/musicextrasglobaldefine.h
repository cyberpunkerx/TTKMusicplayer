#ifndef MUSICEXTRASGLOBALDEFINE_H
#define MUSICEXTRASGLOBALDEFINE_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QtCore/qglobal.h>

#ifdef QT_DEBUG
#   define MUSIC_DEBUG
#endif

//////////////////////////////////////
///exoprt
///
///
#define MUSIC_EXPORT

#ifdef MUSIC_EXPORT
#  define MUSIC_EXTRAS_EXPORT Q_DECL_EXPORT
#else
#  define MUSIC_EXTRAS_IMPORT Q_DECL_IMPORT
#endif

#endif // MUSICEXTRASGLOBALDEFINE_H
