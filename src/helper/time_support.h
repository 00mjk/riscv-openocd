/***************************************************************************
 *   Copyright (C) 2006 by Dominic Rath                                    *
 *   Dominic.Rath@gmx.de                                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef TIME_SUPPORT_H
#define TIME_SUPPORT_H

#include <sys/time.h>
#include <time.h>

extern int timeval_subtract(struct timeval *result, struct timeval *x, struct timeval *y);
extern int timeval_add(struct timeval *result, struct timeval *x, struct timeval *y);
extern int timeval_add_time(struct timeval *result, int sec, int usec);
/* gettimeofday() timeval in 64 bit ms */
extern long long timeval_ms();

typedef struct duration_s
{
	struct timeval start;
	struct timeval duration;
} duration_t;

extern int duration_start_measure(duration_t *duration);
extern int duration_stop_measure(duration_t *duration, char **text);

#endif /* TIME_SUPPORT_H */
