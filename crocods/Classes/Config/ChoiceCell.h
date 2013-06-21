/*
 * Copyright 2011 Jason Rush and John Flanagan. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>
#import "SelectionListViewController.h"

@interface ChoiceCell : UITableViewCell {
    NSString *prefix;
    NSArray *choices;
    int selectedIndex;
}

@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, retain) NSArray *choices;
@property (nonatomic, assign) NSInteger selectedIndex;

- (id)initWithLabel:(NSString*)labelText choices:(NSArray*)newChoices selectedIndex:(NSInteger)selectedIndex;
- (void)setEnabled:(BOOL)enabled;
- (void)setSelectedIndex:(NSInteger)selectedIndex;

@end
