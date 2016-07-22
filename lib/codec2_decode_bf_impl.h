/* -*- c++ -*- */
/* 
 * Copyright 2016 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_LILACSAT_CODEC2_DECODE_BF_IMPL_H
#define INCLUDED_LILACSAT_CODEC2_DECODE_BF_IMPL_H

#include <lilacsat/codec2_decode_bf.h>

extern "C"
{
	#include "codec2/codec2.h"
}

namespace gr {
  namespace lilacsat {

    class codec2_decode_bf_impl : public codec2_decode_bf
    {
     private:
      struct CODEC2 *codec2;

     public:
      codec2_decode_bf_impl(int mode);
      ~codec2_decode_bf_impl();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace lilacsat
} // namespace gr

#endif /* INCLUDED_LILACSAT_CODEC2_DECODE_BF_IMPL_H */

