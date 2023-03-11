// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2003-2006 - Stefan Kueng
// Copyright (C) 2012-2016, 2018-2023 - TortoiseGit

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
#include "stdafx.h"
#include "TortoiseProc.h"
#include "RevGraphBranchColorDlg.h"
#include "gittype.h"
#include "Git.h"
#include "BrowseRefsDlg.h"
#include "StringUtils.h"

IMPLEMENT_DYNAMIC(CRevGraphBranchColorDlg, CStandAloneDialog)

CRevGraphBranchColorDlg::CRevGraphBranchColorDlg(CWnd* pParent /*=nullptr*/)
	: CStandAloneDialog(CRevGraphBranchColorDlg::IDD, pParent)
{
}

CRevGraphBranchColorDlg::~CRevGraphBranchColorDlg()
{
}

void CRevGraphBranchColorDlg::DoDataExchange(CDataExchange* pDX)
{
	CStandAloneDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CRevGraphBranchColorDlg, CStandAloneDialog)
END_MESSAGE_MAP()

BOOL CRevGraphBranchColorDlg::OnInitDialog()
{
	CStandAloneDialog::OnInitDialog();
	return TRUE;
}

void CRevGraphBranchColorDlg::OnOK()
{
	CStandAloneDialog::OnOK();
}
