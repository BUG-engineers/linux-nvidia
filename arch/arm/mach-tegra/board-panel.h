/*
 * arch/arm/mach-tegra/board-panel.h
 *
 * Copyright (c) 2012, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define    BOARD_E1639    0x0667

struct tegra_panel {
	void (*init_sd_settings)(struct tegra_dc_sd_settings *);
	void (*init_dc_out)(struct tegra_dc_out *);
	void (*init_fb_data)(struct tegra_fb_data *);
	void (*init_cmu_data)(struct tegra_dc_platform_data *);
	void (*set_disp_device)(struct platform_device *);
	void (*init_resources)(struct resource *, int n_resources);
	int (*register_bl_dev)(void);

};

extern atomic_t sd_brightness;
