/*
    FlexCOS - Copyright (C) 2013 AGSI, Department of Computer Science, FU-Berlin

    FOR MORE INFORMATION AND INSTRUCTION PLEASE VISIT
    http://www.inf.fu-berlin.de/groups/ag-si/smart.html


    This file is part of the FlexCOS project.

    FlexCOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 3) as published by the
    Free Software Foundation.

    Some parts of this software are from different projects. These files carry
    a different license in their header.

    FlexCOS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
    details. You should have received a copy of the GNU General Public License
    along with FlexCOS; if not it can be viewed here:
    http://www.gnu.org/licenses/gpl-3.0.txt and also obtained by writing to
    AGSI, contact details for whom are available on the FlexCOS WEB site.

*/

#include <flxlib.h>
#include <apdu.h>

/* ========================================================================== *
 *  Select commands
 * ========================================================================== */
PUBLIC sw_t
cmd_select__by_fid(const CmdAPDU *apdu)
{
	return 0x6A00;
}
PUBLIC sw_t
cmd_select__by_path(const CmdAPDU *apdu)
{
	return 0x6A00;
}
PUBLIC sw_t
cmd_select__by_dfname(const CmdAPDU *apdu)
{
	return 0x6A00;
}

