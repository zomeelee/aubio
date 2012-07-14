/*
  Copyright (C) 2012 Paul Brossier <piem@aubio.org>

  This file is part of aubio.

  aubio is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  aubio is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with aubio.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef _AUBIO_SINK_SNDFILE_H
#define _AUBIO_SINK_SNDFILE_H

#ifdef __cplusplus
extern "C" {
#endif

/** \file

  sndfile sink

*/

typedef struct _aubio_sink_sndfile_t aubio_sink_sndfile_t;
aubio_sink_sndfile_t * new_aubio_sink_sndfile(char_t * method, uint_t hop_size, uint_t samplerate);
void aubio_sink_sndfile_do(aubio_sink_sndfile_t * s, fvec_t * write_data, uint_t * written);
void del_aubio_sink_sndfile(aubio_sink_sndfile_t * s);

#ifdef __cplusplus
}
#endif

#endif /* _AUBIO_SINK_SNDFILE_H */