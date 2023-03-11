// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2003-2006 - Stefan Kueng
// Copyright (C) 2012, 2014-2016, 2023 - TortoiseGit

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#pragma once
#include "acedit.h"
#include "StandAloneDlg.h"

/**
 * \ingroup TortoiseProc
 * helper dialog to enter branch colors for the revision graph.
 */
class CRevGraphBranchColorDlg : public CStandAloneDialog
{
	DECLARE_DYNAMIC(CRevGraphBranchColorDlg)

public:
	CRevGraphBranchColorDlg(CWnd* pParent = nullptr); // standard constructor
	virtual ~CRevGraphBranchColorDlg();

// Dialog Data
	enum { IDD = IDD_REVGRAPH_BRANCH_COLORS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX) override; // DDX/DDV support
	virtual BOOL OnInitDialog() override;
	virtual void OnOK() override;

	DECLARE_MESSAGE_MAP()
};
